#include<stdio.h>
typedef struct{
	short x;
	short y;
}POINT;
int main()
{
	short n=0;
	scanf("%hd",&n);
	POINT p[2*n];
	short f[101][101]={0};
	short i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%hd%hd",&p[2*i].x,&p[2*i].y);
		scanf("%hd%hd",&p[2*i+1].x,&p[2*i+1].y);
		for(j=p[2*i].x;j<p[2*i+1].x;j++)
		{
			for(k=p[2*i].y;k<p[2*i+1].y;k++)
		    {
			    f[j][k]=1;			
		    }
		}
	}
	short count=0;
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			if(f[i][j]==1)  count++;
		}
	}
	printf("%hd",count);
	return 0;
}
