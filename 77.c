#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char ss[20]={'\0'},*p=NULL;
	int a=0,b=0,result=0;
	short sym=0,i=0;
	short f(char);
	int ff(int,int,short);
	gets(ss);
	if(f(ss[0]))
	{
		sym=f(ss[0]);
		a=atoi(ss+2);
		p=ss+2;
		while(isdigit(*p)) p++;
		b=atoi(p+1);
		
	 } 
	else
	{
	 	a=atoi(ss);
	 	p=ss;
	 	while(isdigit(*p)) p++;
	 	p++;	 	
	 	if(f(*p))
	 	{
	 		sym=f(*p);
	 		p+=2;
	 		b=atoi(p);
		 }
		else
		{
			b=atoi(p);
			while(isdigit(*p)) p++;
			p++;
			sym=f(*p);
		}
	 }
	result=ff(a,b,sym);
	printf("%d",result);
	return 0;
}
short f(char t)
{
	switch(t)
	{
		case '+': return 1;
		case '-': return 2;
		case '*': return 3;
		case '/': return 4;
		case '%': return 5;
		default: return 0;
	}
}
int ff(int x,int y,short k)
{
	switch(k)
	{
		case 1: return x+y;
		case 2: return x-y;
		case 3: return x*y;
		case 4: return x/y;
		case 5: return x%y;
	}
}
