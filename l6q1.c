void in(int In)
{
	int d[]={0x0004,0x0005,0x0006};
	int i=0;
	while(i<3)
	{
		__asm
		{
			str d[i],[In],#4
		}
		i++;
	}
}
void output(int k,int In,int out)
{
	int c=0;
	int i;
	__asm
	{
		mov c,0
		loop:
			ldr i,[In]
			add i,i,k;
			str i,[out]
			add In,In,#4
			add out,out,#4
			add c,c,#1
			cmp c,#3
			beq exit
			blt loop
			exit:
	}
}
int main()
{
	int l;
	int In,out;
	In=0x3000;
	out=0x4000;
	l=3;in(In);
	output(l,In,out);
	return 0;
}
