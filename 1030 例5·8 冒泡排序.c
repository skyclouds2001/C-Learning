//ÉıĞò¡¢×ÔÇ°Íùºó

#include<stdio.h>
int main()
{
	int i,j,N=10;
	int a[N];
	int t;
	printf("Please input 10 numbers  \n");
	for(i=0;i<N;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++)
	    printf("%d ",a[i]);
	return 0;
}
