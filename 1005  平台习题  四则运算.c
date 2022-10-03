#include<stdio.h>

int main ()
{
	int a,b,d;  
	char c;
	printf("请输入两个数与符号：\n"); 
	scanf ("%d %d %c",&a,&b,&c);
	
	if (c=='+')  
	 d=a+b;
	
    else if (c=='-')
     d=a-b;
	
	else if (c=='*')
	 d=a*b;
	
	else if (c=='/')
	 d=a/b;
	
	else
	 d=0;	
	
	printf ("d=%d\n",d);
	return 0 ;
} 
