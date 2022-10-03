#include<stdio.h>
int main()
{
	int a[]={31,41,59,26,41,58,67,99,12,85};
	short i=0,t=0,j=0;
	for(i=1;i<10;i++)
	{
		t=a[i];
		for(j=i-1;j>=0&&a[j]>t;j--)  a[j+1]=a[j];
		a[j+1]=t;
		for(j=0;j<10;j++)  printf("%d ",a[j]);
		printf("\n");
	}
	return 0;
}
