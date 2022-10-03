#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char *ss[1000]={0},*s[1000]={0};
	short i=0,m=0,n=0;
	char t=0;
	for(i=0;(t=getchar())!='\n';i++)
	{
		ss[i]=(char*)malloc(sizeof(char));
		s[i]=(char*)malloc(sizeof(char));
		*ss[i]=t;
	}
	n=i;
	scanf("%hd",&m);
	if(m>n)
	{
		printf("error");
		exit(0);
	}
	void slen(char**,char**,short);
	slen(ss,s,m);
	for(i=0;i<=n-m;i++)  printf("%c",*s[i]);
	for(i=0;i<n;i++)
	{
		free(ss[i]);
		free(s[i]);		
	}	
	return 0;
 } 
void slen(char **ss,char **s,short m)
{
	short i=0,j=0;
	for(i=m-1,j=0;*(ss+i)!=0;i++,j++)  **(s+j)=**(ss+i);
}
