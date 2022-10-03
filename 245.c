#include<stdio.h>
int main()
{
	short n=0,m=0;	
	scanf("%hd%hd",&n,&m);
	_Bool flag[n];
	short i=0,j=0;
	for(i=1;i<=n;i++)  flag[i-1]=0;
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(i%j==0)  flag[i-1]=!flag[i-1];
		}
	}
	for(i=1;i<=n;i++)
	{
		if(flag[i-1])  printf("%hd ",i);
	}
	return 0;
}
