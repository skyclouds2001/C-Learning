#include<stdio.h>
int main()
{
	short m=0,p=0,n=0;
	short k[n],d[n];
	short i=0;
	int money=0,num=0;
	scanf("%hd%hd%hd",&m,&p,&n);
	for(i=0;i<n;i++)  scanf("%hd%hd",k+i,d+i);
	for(i=0,num=m;i<n;i++)
	{
		if(k[i]<0)
		{
			money+=((-(int)k[i])*d[i]);
			num+=k[i];
		}
		else if(k[i]>0)
		{
			money-=(((int)k[i])*d[i]);
			num+=k[i];
		}
	}
	printf("%d",(int)(num*d[i-1])+money);
	return 0;
}
