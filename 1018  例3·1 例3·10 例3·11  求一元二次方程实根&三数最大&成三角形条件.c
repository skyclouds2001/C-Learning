#include<stdio.h>
#include<math.h>

int main()
{
	double x1,x2,a,b,c,t,max;
	printf("请输入一元二次方程的三个系数&请输入三个数&能否组成三角形 \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	t=b*b-4*a*c;
	if(a==0)
	{
		printf("该方程不是一元二次方程！\n"); 
	}
	else
	    if(t<0)
	    {
	    	printf("该方程无实数根！\n");	 
		}
		else if(t==0)
		{
			x1=(-b)/(2*a);
			x2=x1;
			printf("该方程有两个相等的实根: %.2f %.2f \n",x1,x2);
		}
		else
		{
			x1=((-b)+sqrt(t))/(2*a);
			x2=((-b)-sqrt(t))/(2*a);
			printf("该方程有两个不相等的实根: %.2f %.2f \n",x1,x2);
		}
		
	if(a>b&&a>c)
	    max=a;
	else if(b>a&&b>c)
	    max=b;
	else
	    max=c;	
	printf("max{%.2f,%.2f,%.2f}=%.2f \n",a,b,c,max);
	
	if(a+b<=c||b+c<=a||a+c<=b)
	    printf("cannot form a triangle \n");
	else if(a==b&&b==c)
	    printf("A equilateral triangle \n");
	else if((a==b||b==c||a==c)&&(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b))
	    printf("A isosceles right triangle \n");
	else if(a==b||b==c||a==c)
	    printf("A isosceles triangle \n");
	else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
	    printf("A right angle triangle \n");
	else
	    printf("A normal triangle \n");   
	return 0;	
}
