#include<stdio.h>
int main()
{
	short n=0;
	scanf("%hd",&n);
	short a[n][n];
	short i=0,j=0;
	a[0][0]=1;
	for(i=1;i<n;i++)
	{
		a[i][0]=a[i-1][0];
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		a[i][i]=a[i-1][i-1];
	}
	for(i=0;i<n;i++)
	{		
		for(j=0;j<=i;j++)
		{
			printf("%hd ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
