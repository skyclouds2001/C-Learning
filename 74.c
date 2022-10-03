#include<stdio.h>
#include<string.h>
int main()
{
	short f(char);
	char ss[51]={'\0'},ff[51]={'\0'};
	gets(ss);
	short i=0,j=0,p=0,q=0,k=0,N=strlen(ss),t=0;
	for(i=0,j=0;i<N;i++)
	{
		if(f(ss[i]))
		{
			ff[j]=ss[i];
			j++;
		}
	}
	short n=strlen(ff),count[7]={0},mainflag=1,flag=1,c=0;	
	for(i=0;i<n;i++) count[f(ff[i])]++;
	if(count[1]!=count[2]||count[3]!=count[4]||count[5]!=count[6])
	{
		mainflag=0;
	}
	else
	{		
		for(i=0;i<n;i++)
		{
			for(j=1;j<7;j++)  count[j]=0;
			t=f(ff[i]);
		    if(t%2==0) continue;
			p=i;
			q=i+1;
			c=1;
			while(q<n)
			{
				if(f(ff[q])==t) c++;
				else if(f(ff[q])==t+1) c--;
				if(c==0)  break;
				q++;
			}
			if(q==n)
			{
				mainflag=0;
				break;
			}
			for(k=p;k<=q;k++)
			{
				count[f(ff[k])]++;				
			}
			if(count[1]!=count[2]||count[3]!=count[4]||count[5]!=count[6])
			{
				mainflag=0;
				break;
			}
		}
	}
	if(mainflag==0)
	{
		printf("no");
	}
	else if(mainflag==1)
	{
		printf("yes");
	}
	return 0;
}
short f(char t)
{
	switch(t)
	{
		case '(': return 1;
		case ')': return 2;
		case '[': return 3;
		case ']': return 4;
		case '{': return 5;
		case '}': return 6;
		default: return 0;
	}
}
