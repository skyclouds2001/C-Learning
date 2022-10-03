#include<stdio.h>
int main()
{
	int a[2][3]={0},b[3][2]={0},sum1=0,sum2=0;
	short i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	i=0; sum1=0; sum2=0;
	for(j=0;j<3;j++)
	{
		sum1+=a[i][j]*b[j][i];
		sum2+=a[i][j]*b[j][i+1];
	}
	printf("%d %d\n",sum1,sum2);
	i=1; sum1=0; sum2=0;
	for(j=0;j<3;j++)
	{
		sum1+=a[i][j]*b[j][i-1];
		sum2+=a[i][j]*b[j][i];
	}
	printf("%d %d\n",sum1,sum2);
	return 0;
}
