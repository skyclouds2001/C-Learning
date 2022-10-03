#include<stdio.h>
int main()
{
	int a[4][5]={0};
	short x=0,y=0,i=0,j=0,p=0,q=0,t=0,flag=0,mainflag=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			x=i; y=j;
			t=a[x][y];
			flag=1;
			for(p=0;p<4&&flag==1;p++)
			{
				if(a[p][y]<t)  flag=0;
			}
			for(q=0;q<5&&flag==1;q++)
			{
				if(a[x][q]>t)  flag=0;
			}
			if(flag==1)  
			{
				mainflag=1;
				printf("%d %hd %hd\n",a[x][y],x+1,y+1);
			}
		}
	}
	if(mainflag==0)  printf("°°µã²»´æÔÚ");
	return 0;
}
