#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char s[101]={'\0'};
	gets(s);
	short n=strlen(s),N=0;
	int a[75]={0},t=0;
	short i=0,j=0;
	while(i<n)
	{
		while(!isdigit(s[i])&&i<n)  i++;
		while(isdigit(s[i])&&i<n)
		{
			t*=10;
			t+=s[i]-'0';
			i++;
		}
		a[j]=t;
		j++;
		t=0;
	}
	N=j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];  a[j]=a[j+1];  a[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++)  printf("%d ",a[i]);
	return 0;
 } 
