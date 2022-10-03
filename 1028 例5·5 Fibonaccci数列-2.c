#include<stdio.h>
int main()
{
	int F[40]={0};
	short i;
	F[0]=1;
	F[1]=2;
	for(i=2;i<40;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
	for(i=0;i<40;i++)
	{
		printf("%hd %d \n",i+1,F[i]);
	}
	return 0;
 } 
