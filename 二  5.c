#include<stdio.h>
int main()
{
	short m=0,n=0;
	scanf("%hd%hd",&m,&n);
	short a[m][n];
	short i=0,j=0,k=0; 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%hd",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				if(k==i)  continue;
				if(a[k][j]<a[i][j])  break;
			}
			if(k!=m)  continue;
			for(k=0;k<n;k++)
			{
				if(k==j)  continue;
				if(a[i][k]<a[i][j])  break;
			}
			if(k!=n)  continue;
			printf("%hd %hd %hd\n",i,j,a[i][j]);
		}
	}
	return 0;
}
