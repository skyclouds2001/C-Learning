#include<stdio.h>
#define PI 3.1415926535

int main()
{
	double r,S,V;
	printf("��������İ뾶��\n");
	scanf("%lf",&r);
	S=4.0*PI*r*r;
	V=4.0*PI*r*r*r/3.0;
	printf("��ı����Ϊ%lf\n��������Ϊ%lf",S,V);
	return 0;
}
