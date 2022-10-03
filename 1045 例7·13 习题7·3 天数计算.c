#include<stdio.h>
typedef struct{
	short year;
	short month;
	short day;
}DATE; 
void main()
{
	DATE today;
	short month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	short sum,i;
	scanf("%hd%hd%hd",&today.year,&today.month,&today.day);
	if(today.year%400==0||today.year%4==0&&today.year%100!=0)  month[2]=29;
	for(i=1;i<today.month;i++)
	    sum+=month[i];
	sum+=today.day;
	printf("%hd",sum);
}
