#include<stdio.h>
typedef struct{
	short year;
	short month;
	short day;
}date;
int main()
{
	short mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	date today={0,0,0};
	short allday=0,i=0;
	scanf("%hd,%hd,%hd",&today.year,&today.month,&today.day);
	if(today.year%400==0||today.year%4==0&&today.year%100!=0)  mon[1]++;
	for(i=0;i<today.month-1;i++)  allday+=mon[i];
	allday+=today.day;
	printf("%hd",allday);
	return 0;
}
