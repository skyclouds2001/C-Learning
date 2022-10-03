#include<stdio.h>
int main()
{
	short n=0,n3=0,sum=0;
	scanf("%hd",&n);
	n3=n*n*n;
	short i=0,j=0,t=0;
	t=n;
	for(i=1;i<n3/3;i+=2)
	{
		sum=i*n;
		for(j=0;j<n;j++)
		{
			sum+=j*2;
		}
		if(sum==n3) break;
	 } 
	for(j=0;j<n;j++)
	{
	 	printf("%hd ",i+j*2);
	 }
	printf("\n");	
	return 0;
}
