#include<stdio.h>
int GCD(int a,int b)
{
	if(b==0)	return a;
	else 		return GCD(b,a%b);
}
int main()
{
	int a1,a2,b1,b2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	int g1=GCD(a1,b1),g2=GCD(a2,b2);
	a1/=g1;	a2/=g2;
	b1/=g1;	b2/=g2;
	int g3=GCD(b1,b2);
	long long g4=b1*b2/g3;
	if(g4*a1/b1>g4*a2/b2)	printf("%d/%d > %d/%d\n",a1*g1,b1*g1,a2*g2,b2*g2);
	else if(g4*a1/b1==g4*a2/b2)	printf("%d/%d = %d/%d\n",a1*g1,b1*g1,a2*g2,b2*g2);
	else if(g4*a1/b1<g4*a2/b2)	printf("%d/%d < %d/%d\n",a1*g1,b1*g1,a2*g2,b2*g2);
	return 0;
 } 
