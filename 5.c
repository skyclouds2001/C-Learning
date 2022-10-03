#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	short a[n][m],s[n][m];
	short i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%hd",&a[i][j]);
			s[i][j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-2;j++)
	    {
			if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]) 
			{
				s[i][j]=1;  s[i][j+1]=1;  s[i][j+2]=1;
			}
	    }
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n-2;i++)
	    {
			if(a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]) 
			{
				s[i][j]=1;  s[i+1][j]=1;  s[i+2][j]=1;
			}
	    }	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(s[i][j]==1) a[i][j]=0;
			printf("%hd ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
