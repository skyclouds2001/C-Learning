#include<stdio.h>
int main()
{
	int m,n;    //n,p,x:ÐÐ m,q,y:ÁÐ
	int i,j;
	int p,q;
	int flag=0,count=0;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	 
	for(i=0;i<n;i++)
	{		
		for(j=0;j<m;j++)
		{			
			flag=0;
			for(p=0;p<m&&flag==0;p++)
			{
				if(a[i][j]>a[i][p]) flag=-1;
			}
			for(q=0;q<n&&flag==0;q++)
			{
				if(a[i][j]<a[q][j]) flag=-1;
			}
			if(flag==0) 
			{
				printf("%d %d %d \n",i+1,j+1,a[i][j]);
				count++;
			}			
		}
    }
	if(count==0)  printf("NO");
	return 0;
}
