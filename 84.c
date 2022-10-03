#include<stdio.h>
#include<string.h>
#include<memory.h>
#include<ctype.h>
int main()
{
	char toback[]={"cd .."},tomain[]={"cd /"},output[]={"pwd"};
	char cata[201]={'\0'},cmd[200]={'\0'};
	gets(cata);
	short n=0,i=0;
	while(1)
	{
		gets(cmd);
		n=strlen(cata);
		if(!strcmp(cmd,output))
		{
			puts(cata);
			break;
		}
		else if(!strcmp(cmd,tomain)&&strcmp(cata,"/"))
		{			
			memset(cata+1,'\0',(n-1)*sizeof(char));
		}
		else if(!strcmp(cmd,toback)&&strcmp(cata,"/"))
		{
			for(i=n-1;cata[i]!='/'&&i>=0;i--)  ;
			memset(cata+i,'\0',(n-i)*sizeof(char));
			if(!strlen(cata))  cata[0]='/';
		}
		else if(!strncmp("cd",cmd,2)&&(isalpha(cmd[3])||isdigit(cmd[3])))
		{
			if(n!=1)  strcat(cata,"/");
			strcat(cata,cmd+3);
		}
		else if(!strncmp(cmd,"cd",2)&&cmd[3]=='/')
		{
			memset(cata,'\0',n*sizeof(char));
			strcpy(cata,cmd+3);
		}
	}
	return 0;
} 
