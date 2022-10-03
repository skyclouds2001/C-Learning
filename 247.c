#include<stdio.h>
int main()
{
	short y=0,d=0;
	short m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	short month=0,day=0;
	short i=0;
	scanf("%hd%hd",&y,&d);	
	if(y%400==0||y%4==0&&y%100!=0)  m[1]=29;
	while(d>m[i])
	{
		d-=m[i];
		i++;
	}
	month=i+1;
	day=d;
	printf("%hd %hd",month,day);
	return 0;
}
