#include<stdio.h>
int main()
{
	int n=3;
	//scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	int i,j;
	int t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{							
			b[j][i]=a[i][j];			
		}
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{							
			c[n-j-1][n-i-1]=a[i][j];			
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	printf("\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);			
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);			
		}
		printf("\n");
	}
	return 0;
}
