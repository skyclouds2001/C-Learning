#include<stdio.h>
int main()
{
	short n,m;
	scanf("%hd%hd",&n,&m);
	short a[n][m];
	short i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%hd",&a[i][j]);
		}
	}
	short grayscale[16]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			grayscale[a[i][j]]++;
		}
	}
	for(i=0;i<16;i++)
	{
		if(grayscale[i]!=0)  printf("%hd %hd \n",i,grayscale[i]);
	}
	return 0;
}
