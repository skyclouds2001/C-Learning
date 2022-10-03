#include<stdio.h>
int main()
{
	int sum,x;
	while(1)
	{
		scanf("%d",&x);
		if(x>0)
		    sum+=x;
		else if(x==0)
		    break;
	}
	printf("%d",sum);
	return 0;
 } 
