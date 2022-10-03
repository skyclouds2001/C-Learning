#include<stdio.h>
#include<math.h>

int main ()
{
	int a,b,jia,jian,cheng,square_a,cube_a,max,result_a;
	double chu,square_root_a;
	printf("Please input the first interger: \n");
	scanf("%d",&a);
	printf("Please input the second interger: \n");
	scanf("%d",&b);
	jia=a+b;
	jian=a-b;
	cheng=a*b;
	chu=(double)a/(double)b;
		if(a<b) max=b;
	    else max=a;
	square_a=a*a;
	cube_a=a*a*a;
	square_root_a=sqrt(a);
        if(a%2==1) result_a=a*3+1;
        else result_a=a;
	printf("%d+%d=%d \n",a,b,jia);
	printf("%d-%d=%d \n",a,b,jian);
	printf("%d*%d=%d \n",a,b,cheng);
	printf("%d/%d=%.2f \n",a,b,chu);
	printf("%d^2=%d \n",a,square_a);
	printf("%d^3=%d \n",a,cube_a);
	printf("sqrt(%d)=%.2f \n",a,square_root_a);
	printf("max{%d,%d}=%d \n",a,b,max);
	printf("%d \n",result_a);
	return 0;
	
}
