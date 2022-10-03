#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	short lan=0,press=0,num=0,pjud=0,rjud=0;
	char ISBN[14]={'\0'};
	_Bool flag=1;
	short i=0,j=0;
	int sum=0;
	gets(ISBN);
	for(i=0,j=0;i<11;i++)
	{		
		if(isdigit(ISBN[i]))
		{
			j++;
			sum+=((ISBN[i]-'0')*j);			
		}
	}
	if((sum%11<10&&sum%11==(ISBN[12]-'0'))||(sum%11==10&&ISBN[12]=='X'))  flag=1;
	else  flag=0;
	if(flag==1)  printf("Right");
	else
	{
		if(sum%11==10)  ISBN[12]='X';
		else
		{
			itoa(sum%11,ISBN+12,10);
		}
		puts(ISBN);
	}
	return 0;
 } 
