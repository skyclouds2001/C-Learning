#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Please input a two-digit number:");
	scanf("%d",&a);
	d=a%10;
	c=(a-d)/10;
	b=d*10+c;
	printf("The reversal is: %d",b);
	return 0;
}
