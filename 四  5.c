#include<stdio.h>
#define ffabs(a) (a>0)?a:-a
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	int a[100][100]={0};
	int l[100]={0},lmax=0,h[100]={0},hmax=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			l[j]+=ffabs(a[i][j]);
			h[i]+=ffabs(a[i][j]);
		}
	}
	for(i=0;i<m;i++)	(h[i]>hmax)?hmax=h[i]:1;
	for(j=0;j<n;j++)	(l[j]>lmax)?lmax=l[j]:1;
	printf("%d %d",lmax,hmax);
	return 0;
 } 
