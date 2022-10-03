#include<stdio.h>
int main()
{
	char s[51]={0};
	gets(s);
	short grade=0,typecount=0,slen=0,f[4]={0};
	short i=0;
	while(1)
	{
		if(s[i]=='\0')  break;
		i++;
	}
	slen=i;
	if(slen!=0) grade++;
	if(slen>8) grade++;
	short typejudge(char);
	for(i=0;i<slen;i++)  
	{
		f[typejudge(s[i])]++;
	}
	for(i=0;i<4;i++)
	{
		if(f[i]!=0)  typecount++;
	}
	if(typecount!=0)  grade+=(typecount-1);
	printf("%hd",grade);
	return 0;
}
short typejudge(char t)
{
	if(t>='A'&&t<='Z')  return 0;
	else if(t>='a'&&t<='z')  return 1;
	else if(t>='0'&&t<='9')  return 2;
	else if(t!='\0')  return 3;
}
