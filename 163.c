#include<stdio.h>
int main()
{
	short n=0;
	scanf("%hd",&n);
	int a[n][n];
	short i,j;
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i][i];
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i][n-i-1];
	}
	if(n%2==1)  sum-=a[n/2][n/2];
	printf("%d",sum);
	return 0;
 } 
