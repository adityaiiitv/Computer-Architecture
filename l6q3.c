void en_IRQ(int state)
{
	int reg=0;
	__asm
	{
		MRS reg,CPSR
		BIC reg,reg,state,LSL #7
		MSR CPSR_c,reg
	}
}
void dis_IRQ(int state)
{
	int reg = 0;
	__asm
	{
		MRS reg,CPSR
		ORR reg,reg,#0x80
		MSR CPSR_c,reg
	}
}
int main()
{
	int state=1;
	if(state==0)
	{
		dis_IRQ(state);
	}
	else
	{
		en_IRQ(state);
	}
	return 0;
}
