#include<stdio.h>
struct time{
	short h;
	short m;
	short s;
}; 
int main()
{
	struct time a;
	struct time *b=&a;
	int sum=0;
	scanf("%hd%hd%hd",&a.h,&a.m,&a.s);
	sum+=b->s;
	sum+=b->m*60;
	sum+=b->h*3600;
	printf("%d",sum);
	return 0;
}
