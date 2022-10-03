#include<stdio.h>
int main()
{
	int A[3][3]={0},B[3][3]={0};
	short i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			B[j][i]=A[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
