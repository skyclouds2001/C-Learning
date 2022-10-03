#include<stdio.h>
void swap(int *ee,int *ff)
{
	int t=0;
	t=*ee;
	*ee=*ff;
	*ff=t;
}
int main()
{
	int a=0,b=0,*x=0,*y=0,p=0,q=0;
	x=&a;  y=&b;
	scanf("%d%d",x,y);
	void div(int x,int y,int*p,int*q);	
	div(*x,*y,&p,&q);		
	swap(x,y);
	printf("%d %d \n",a,b);	
	printf("%d %d \n",p,q);
	return 0;
 } 
 void div(int aa,int bb,int*cc,int*dd)
 {
 	*cc=aa/bb;
 	*dd=aa%bb;
 }
