#include<stdio.h>
int main()
{
	short m=0,n=0;
	scanf("%hd%hd",&m,&n);
	int a[m][n];
	short i=0,j=0,t=0,x=0,y=0;
	t=1;
	while(t<=m*n)
	{
		x=i; y=j;		
		while(t<=m*n&&j<n-x)
		{			
			a[i][j]=t;
			t++;
			j++;
		}
		j--;
		i++;
		while(t<=m*n&&i<m-y)
		{
			a[i][j]=t;
			t++;
			i++;
		}
		i--;
		j--;
		while(t<=m*n&&j>=y)
		{
			a[i][j]=t;
			t++;
			j--;
		}
		j++;
		i--;
		while(t<=m*n&&i>x)
		{
			a[i][j]=t;
			t++;
			i--;
		}
		i++;
		j++;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
