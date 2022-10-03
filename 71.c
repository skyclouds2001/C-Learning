#include<stdio.h>
typedef struct{
	short x;
	short y;
}POSITION;
int main()
{
	short n,m,t,k;
	scanf("%hd%hd%hd%hd",&n,&m,&t,&k);
	short a[n][m];
	POSITION p[4];
	_Bool flag[t]; 
	short i,j;
	short count=0;
	for(i=0;i<t;i++)  flag[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%hd",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==k&&(i==0||a[i-1][j]!=k)&&(j==0||a[i][j-1]!=k))
			{
				p[0].x=i;  p[0].y=j;
			}
			else if(a[i][j]==k&&(i==n-1||a[i+1][j]!=k)&&(j==m-1||a[i][j+1]!=k))
			{
				p[3].x=i;  p[3].y=j;
			}
		}
	}
	for(i=p[0].x,j=p[0].y-1;i<=p[3].x&&j!=-1;i++)  flag[a[i][j]-1]=1;
	for(i=p[0].x,j=p[3].y+1;i<=p[3].x&&j!=m;i++)  flag[a[i][j]-1]=1;
	for(i=p[0].x-1,j=p[0].y;j<=p[3].y&&i!=-1;j++)  flag[a[i][j]-1]=1;
	for(i=p[3].x+1,j=p[0].y;j<=p[3].y&&i!=n;j++)  flag[a[i][j]-1]=1;
	for(i=0;i<t;i++)  (flag[i])?(count++):1;
	printf("%hd",count);
	return 0;
} 
