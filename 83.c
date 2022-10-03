#include<stdio.h>
int main()
{
	short n=0,m=0;
	scanf("%hd%hd",&n,&m);
	short i,j;
	short a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%hd",&a[i][j]);
		}
	}
	printf("\n");
	short b[m][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[j][n-i-1]=a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%hd ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
