#include<stdio.h>
int main()
{
	const short n=3;
	int a[n][n];
	short i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i][i];
	}
	printf("%d",sum);
	return 0;
 } 
