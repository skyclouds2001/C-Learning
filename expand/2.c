#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x[n+2],y[n+2];
	int i;
	for(i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
	x[n]=x[0];	x[n+1]=x[0];
	y[n]=y[0];	y[n+1]=y[0];
	for(i=1;i<n;i++)
	{
		if(x[n]>x[i])	x[n]=x[i];
		if(y[n]>y[i])	y[n]=y[i];
		if(x[n+1]<x[i])	x[n+1]=x[i];
		if(y[n+1]<y[i])	y[n+1]=y[i];
	}
	printf("%d %d %d %d\n",x[n],y[n],x[n+1],y[n+1]);
	return 0;
}
