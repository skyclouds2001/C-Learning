#include<stdio.h>

int main ()
{
	int i,j,p;
	for(i=1;i<=4;i++)
	{
		p=4-i;
		for(;p>=1;p--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;)
		{
			printf("*");
			j++;
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=1;i<=6;i++)
	{
		p=6-i;
		for(;p>=1;p--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;)
		{
			printf("*");
			j++;
		}
		printf("\n");
	}
	return 0;
}
