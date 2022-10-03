#include<stdio.h>
#include<string.h>
#include<ctype.h>
void wd_sort(char*,short);
int main()
{
	char str[10][20]={'\0'};
	short i=0,j=0;
	short N=0;
	char t=0;
	scanf("%hd",&N);
	for(i=0;i<N;i++)  scanf("%s",str[i]);
	wd_sort(str[0],N);
	for(i=0;i<N;i++)  printf("%s\n",str[i]);
	return 0;
}
void wd_sort(char*p,short n)
{
	short i=0,j=0;
	char ls[20]={'\0'};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(p+j*20,p+(j+1)*20)>0)
			{
				strcpy(ls,p+j*20);
				strcpy(p+j*20,p+(j+1)*20);
				strcpy(p+(j+1)*20,ls);
			}
		}
	}
}
