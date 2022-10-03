#include<stdio.h>
int main()
{
	short m;
	scanf("%hd",&m);
	short i,j,t;
	int a[m][m];
	int s[2*m+2];
	for(i=0;i<2*m+2;i++)
	{
		s[i]=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			s[i]+=a[i][j];
		}
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<m;i++)
		{
			s[j+m]+=a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{		
		s[2*m]+=a[i][i];
	}
	for(i=0;i<m;i++)
	{		
		s[2*m+1]+=a[i][m-i-1];
	}
	for(i=0;i<2*m+1;i++)
	{
		for(j=2*m+1;j>i;j--)
		{
			if(s[j-1]<s[j])
			{
				t=s[j];  s[j]=s[j-1];  s[j-1]=t;
			}
		}
	}
	for(i=0;i<2*m+2;i++)
	{		
		printf("%d ",s[i]);
	}
	printf("\n");
	return 0;
}
