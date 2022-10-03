#include<stdio.h>
int main()
{
	double sn=0;
	int N=0;
	short f=1;
	int i=1;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sn+=(double)f*(double)i/(2.0*(double)i-1.0);
		f*=-1;
	}
	printf("%.3f",sn);
	return 0;
 } 
