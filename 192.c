#include<stdio.h>
int main()
{
	int a[5]={0},b[5]={0};
	short i;
	scanf("%d,%d,%d,%d,%d",a,a+1,a+2,a+3,a+4);
	for(i=0;i<5;i++)  b[4-i]=a[i];
	for(i=0;i<5;i++)  printf("%d ",b[i]);
	return 0;
}
