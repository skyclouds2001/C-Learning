#include<stdio.h>

int main()
{
	double a,b,result;
	char op;
	scanf("%lf %c %lf",&a,&op,&b);
	switch(op)
	{
		case '+': result=a+b;break;
		case '-': result=a-b;break;
		case '*': result=a*b;break;
		case '/': result=a/b;break;
	}
	printf("%lf %c %lf = %lf",a,op,b,result);
	return 0;
}
