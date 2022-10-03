#include<stdio.h>

int main()
{
	double x ;
	int y;
	printf("Please input a real number! \n");
	scanf("%lf",&x);
	if(x==0.0)
	{
		y=0;
	}
	else if(x<0.0)
	{
		y=-1;
	}
	else
	{
		y=1;
	}
	printf("The result of %lf is %d \n",x,y);
	return 0 ;
 } 
