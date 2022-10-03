#include<stdio.h>
int main()
{
	short N=0;
	scanf("%hd",&N);
	int A[N],*p=0,max=0;
	short i=0;
	for(i=0;i<N;i++) scanf("%d",A+i);
	for(i=0,p=&A[0],max=A[0];i<N;i++)
	{
		if(max<A[i]) 
		{
			max=A[i];
			p=&A[i];
		}
	}
	printf("%hd %d %d",N,max,p-&A[0]);
	return 0;
}
