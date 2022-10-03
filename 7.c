#include<stdio.h>
int main()
{
	short day=0,index=0,digit=0,t=0,flag=0;
	int plate=0;
	scanf("%hd%hd%d",&day,&index,&plate);
	digit=plate%10;
	if(index>=0&&index<200)
	{		
		printf("%hd no",digit);
	}
	else if(index>=200&&index<400)
	{
		t=digit%5;
		if(t==day&&day!=5||day==5&&t==0)  printf("%hd yes",digit);
		else  printf("%hd no",digit);
	}
	else if(index>=400)
	{
		t=digit%2;
		flag=1;
		if((t==1&&(day==1||day==3||day==5))||(t==0&&(day==2||day==4)))
		{
			flag=-1;	
		}
		if(flag==-1)  printf("%hd yes",digit);
		else  printf("%hd no",digit);
	}
	return 0;
}
