void con(char a[],char b[])
{
	int i=0;
	int c=0x0004;
	while(&a[i]!="\0")
	{
		__asm
		{
			str a[i],[c],#1
		}
		i++;
	}
	i=0;
	while(&b[i]!="\0")
	{
		__asm
		{
			str a[i],[c],#1
		}
		i++;
	}
}
int main()
{
	char a[]="hello";
	char b[]="world";
	con(a,b);
	return 0;
}
