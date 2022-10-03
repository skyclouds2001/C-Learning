#include<stdio.h>
int main()
{
	short h,m;
	scanf("%hd:%hd",&h,&m);
	if(h>=0&&h<12)
	{
		printf("%hd:%hd AM",h,m);
	}
	else if(h>=12&&h<=23)
	{
		h-=12;
		printf("%hd:%hd PM",h,m);
	}
	return 0;
}
