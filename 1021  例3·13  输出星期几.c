#include<stdio.h>

int main()
{
	int day;
	printf("please input a number between 0 and 6 \n");
	scanf("%d",&day);
	switch(day)
	{
		case 0 : printf("Sunday");break;
		case 1 : printf("Monday");break;
		case 2 : printf("Tuesday");break;
		case 3 : printf("Wednesday");break;
		case 4 : printf("Thursday");break;
		case 5 : printf("Friday");break;
		case 6 : printf("Saturday");break;
		default: printf("input an error number");
	}
	return 0 ;
}
