#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string i[4];
	cout<<"\n Four instructions using _ in place of spaces.\n";
	i[0]="ADD_R1,R1,R1";
	i[1]="SUB_R1,R1,R1";
	i[2]="ADD_R1,R1,R1";
	i[3]="MUL_R1,R1,R1";
	cout<<"\n "<<i[0]<<"\n "<<i[1]<<"\n "<<i[2]<<"\n "<<i[3]<<"\n";
	
	int order[4], start=0;
	cout<<"\n Enter the order by shuffling 0,1,2,3. Enter only one change in the configuration.\n";
	cin>>order[0]>>order[1]>>order[2]>>order[3];
	if(order[0]==0 && order[1]==1 && order[2]==2 && order[3]==3)
	{
		cout<<"\n No hazards";
		start++;
	}
	int raw=0,war=0,waw=0,num;
	if(start==0)
	{
		// order 0
		if(order[0]!=0)
		{
			int loc=1;
			for(int i=1;i<=4;i++)
			{
				if(order[i-1]==order[0])
				{
					loc=i;
				}
			}
			num=loc;
			raw+=(num*2);
			war+=(num*2);
			waw+=num;
		}
		// order 1
		if(order[1]!=1)
		{
			int loc=1;
			for(int i=1;i<=4;i++)
			{
				if(order[i-1]==order[1])
				{
					loc=i;
				}
			}
			num=loc;
			raw+=(num*2);
			war+=(num*2);
			waw+=num;
		}
		// order 2
		if(order[2]!=2)
		{
			int loc=1;
			for(int i=1;i<=4;i++)
			{
				if(order[i-1]==order[2])
				{
					loc=i;
				}
			}
			num=loc;
			raw+=(num*2);
			war+=(num*2);
			waw+=num;
		}
		// order 3
		if(order[3]!=3)
		{
			int loc=1;
			for(int i=1;i<=4;i++)
			{
				if(order[i-1]==order[3])
				{
					loc=i;
				}
			}
			num=loc;
			raw+=(num*2);
			war+=(num*2);
			waw+=num;
		}
	}
	
	cout<<"\n Total number of hazards in the configuration(raw,war,waw):"<<raw<<" "<<war<<" "<<waw<<"\n";
	return 0;
}
