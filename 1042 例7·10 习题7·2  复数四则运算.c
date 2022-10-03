#include<stdio.h>
#include<math.h>
typedef struct COMplex{
	double real;
	double imag;
	char sym[1];
}Complex;
int main()
{
	Complex a,b,add,sub,mul,div;
	Complex *aa=0,*bb=0;	
	scanf("%lf %lf",&a.real,&a.imag);
	scanf("%lf %lf",&b.real,&b.imag);
	aa=&a;
	bb=&b;
	add.real=aa->real+bb->real; 
	add.imag=aa->imag+bb->imag;
	if(add.imag<0)  add.sym[0]='-';  else  add.sym[0]='+';
	sub.real=aa->real-bb->real; 
	sub.imag=aa->imag-bb->imag;
	if(sub.imag<0)  sub.sym[0]='-';  else  sub.sym[0]='+'; 
	mul.real=aa->real*bb->real-aa->imag*bb->imag;
	mul.imag=aa->real*bb->imag+aa->imag*bb->real;
	if(mul.imag<0)  mul.sym[0]='-';  else  mul.sym[0]='+';
	div.real=(aa->real*bb->real+aa->imag*bb->imag)/(pow(aa->imag,2)+pow(bb->imag,2));
	div.imag=(aa->imag*bb->real-aa->real*bb->imag)/(pow(aa->imag,2)+pow(bb->imag,2));
	if(div.imag<0)  div.sym[0]='-';  else  div.sym[0]='+';
	printf("%.2f%c%.2fi \n",add.real,add.sym[0],fabs(add.imag));
	printf("%.2f%c%.2fi \n",sub.real,sub.sym[0],fabs(sub.imag));
	printf("%.2f%c%.2fi \n",mul.real,mul.sym[0],fabs(mul.imag));
	printf("%.2f%c%.2fi \n",div.real,div.sym[0],fabs(div.imag));
	return 0;
}
