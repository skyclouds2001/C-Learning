#include<stdio.h>
#include<string.h>
int main()
{
	char tmpstr[100]={0};
	char maxline[100]={0};
	char endline[]="***end***";
	int maxlen=0;
	while(1)
	{
		gets(tmpstr);
		if(!strcmp(tmpstr,endline))    
		    break;
		if(strlen(tmpstr)>maxlen)
		{
			maxlen=strlen(tmpstr);
			strcpy(maxline,tmpstr);
		}
	}
	printf("%s \n",maxline);
	return 0;
}
