#include<stdio.h>
#include<math.h>
typedef struct{
	int factor;
	int exp;
}TERM;
int main()
{
	short n=0,m=0,t=0;
	scanf("%hd%hd%hd",&n,&m,&t);
	short i=0,j=0;
	TERM first[n],second[m];
	_Bool k=0;	
	for(i=0;i<n;i++)  scanf("%d%d",&first[i].factor,&first[i].exp);
	for(j=0;j<m;j++)  scanf("%d%d",&second[j].factor,&second[j].exp);
	for(j=0;j<m&&t==1;j++)  second[j].factor*=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(first[i].exp==second[j].exp)
			{
				first[i].factor+=second[j].factor;				
				second[j].factor=0;
			}						
		}
	}	
	_Bool output(TERM*,_Bool);
	for(i=0,j=0;i<n&&j<m;)
	{
		if(i==0&&j==0)  k=0;
		else  k=1;
		if(first[i].exp>second[j].exp)
		{
			output(second+j,k);
			j++;
		}
		else if(first[i].exp<=second[j].exp)
		{
			output(first+i,k);
			i++;
		}
	}
	if(i==n&&j<m)
	{
		for(;j<m;j++)
		{
			output(second+j,1);
		}
	}
	else if(j==m&&i<n)
	{
		for(;i<n;i++)
		{
			output(first+i,1);
		}
	}
	return 0;
}
_Bool output(TERM*p,_Bool k)
{
	if(p->factor==0)  return 0;
	else if(k==0)  ;
	else if(p->factor<0)  printf("-");
	else if(p->factor>0)  printf("+");
	if(p->exp==0)  printf("%d",abs(p->factor));
	else if(p->exp==1&&abs(p->factor)==1)  printf("x");
	else if(abs(p->factor)==1) printf("x^%d",p->exp);
	else if(p->exp==1&&p->factor!=1)  printf("%dx",abs(p->factor));
	else if(p->factor!=1) printf("%dx^%d",abs(p->factor),p->exp);
	return 0;
}
