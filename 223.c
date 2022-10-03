#include<stdio.h>
int main()
{
	int a[3][3]={0};
	short i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	int sum=0;
	for(i=0;i<3;i++) sum+=a[i][i];
	printf("%d",sum);
	return 0;
 } 
