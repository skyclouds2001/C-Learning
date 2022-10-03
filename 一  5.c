#include<stdio.h>
int main()
{
	short N=0;
	scanf("%hd",&N);
	short i=0,j=0,k=0;
	short x=0,y=0,n=0;
	_Bool flag=0;	
	short a[N][N];
	for(i=0;i<N;i++)  a[0][i]=i+1;
	k=N-1;  flag=1;  n=N+1;
	x=0;  y=N-1;
	while(k>0)
	{
		if(flag)
		{
			for(i=x+1,j=y;i<=x+k;i++)
			{
				a[i][j]=n;
				n++;
			}
			x=i-1;  y=j;
			for(i=x,j=y-1;j>=y-k;j--)
			{
				a[i][j]=n;
				n++;
			}
			x=i;  y=j+1;
		}
		else
		{
			for(i=x-1,j=y;i>=x-k;i--)
			{
				a[i][j]=n;
				n++;
			}
			x=i+1;  y=j;
			for(i=x,j=y+1;j<=y+k;j++)
			{
				a[i][j]=n;
				n++;
			}
			x=i;  y=j-1;
		}
		flag=(flag+1)%2;
		k--;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%hd ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
