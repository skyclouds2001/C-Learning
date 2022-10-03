#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char string[100]={'\0'};	
	gets(string);
	short num[5]={0};
	void count(char*,short*);
	count(string,num);
	printf("%hd %hd %hd %hd %hd",num[0],num[1],num[2],num[3],num[4]);
	return 0;
}
void count(char*s,short*f)
{
	short ff(char);
	short i=0;
	for(i=0;i<100;i++)
	{
		if(*(s+i)=='\n'||*(s+i)=='\0')  break;
		switch(ff(*(s+i)))
		{
			case 1:*f+=1;break;
			case 2:*(f+1)+=1;break;
			case 3:*(f+2)+=1;break;
			case 4:*(f+3)+=1;break;
			case 5:*(f+4)+=1;break;
		}
	}
}
short ff(char t)
{
	if(isupper(t))  return 1;
	else if(islower(t))  return 2;
	else if(t==' ')  return 3;
	else if(isdigit(t))  return 4;
	else  return 5;
}
