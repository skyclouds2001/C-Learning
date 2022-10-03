#include<stdio.h>
int main()
{
	short n=0;
	scanf("%hd",&n);
	short a[n][n];
	short i,j;
	short x,y,f;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%hd",&a[i][j]);
		}
	} 
	if(n==1)
	{
		printf("%hd ",a[0][0]);
	}
	else if(n==2)
	{
		printf("%hd %hd %hd %hd ",a[0][0],a[1][0],a[0][1],a[1][1]);
	}
	else if(n>2)
	{
		printf("%hd %hd %hd %hd ",a[0][0],a[0][1],a[1][0],a[2][0]);
		x=1;  y=1;
		f=1;
		for(i=4;i<n*n;i++)
		{
			printf("%hd ",a[x][y]);
			if(f==-1&&y==0&&x!=n-1)
		    {			    
			    x++;
			    f*=-1;
		    } 
		    else if(f==1&&x==0&&y!=n-1)
		    {
			    y++;
			    f*=-1;
		    }
		    else if(f==-1&&x==n-1)
		    {
			    y++;
			    f*=-1;
		    }
		    else if(f==1&&y==n-1)
		    {
			    x++;
			    f*=-1;
		    }
		    else if(f==-1)
		    {
			    x++; 
				y--;
		    }
		    else if(f==1)
		    {
			    x--; 
				y++;
	 	    }
		}		
	}
	return 0;
}
