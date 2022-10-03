#include<stdio.h>
#include<math.h>

int main()
{
	double Sn,ai,Si;
	int n,sum,N,f,i;
	scanf("%d",&N);
	
	for(n=1,Sn=0;n<=100;n++)
	{
		Sn+=sin(1.0/n);
	}
	printf("%lf \n",Sn);
	
	for(n=1,sum=0;n<=100;n++)
	{
		sum+=n;
	}
	printf("%d \n",sum);
	
	for(n=1,f=1;n<=N;n++)
	{
		f*=n;
	}
	printf("%d \n",f);
	
	i=1;
	do
	{
		ai=(2.0*i-1.0)/pow(2.0,i);
		Si+=ai;
		i++;
	}while(ai<=0.000001);
	printf("%lf \n",Si);
	
	return 0;
}
