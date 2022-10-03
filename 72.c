#include<stdio.h>
#include<string.h>
int main()
{
	char ls[101]={'\0'},maxs[101]={'\0'},end[]={"***end***"};
	short n=0,max=0;
	while(1)
	{
		gets(ls);
		if(!strcmp(ls,end)) break;
		n=strlen(ls);
		if(n>max)
		{
			strcpy(maxs,ls);
			max=n;
		}		
	}
	printf("%hd\n",max);
	puts(maxs);
	return 0;
 } 
