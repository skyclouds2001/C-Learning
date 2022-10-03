#include<stdio.h>

int main()
{
	char c[6];
	int i;
	c[1]='C';
	c[2]='h';
	c[3]='i';
	c[4]='n';
	c[5]='a';
	for(i=1;i<=5;i++)
	{
		c[i]+=4;
		printf("%c",c[i]);
	}
	return 0;
	
}
