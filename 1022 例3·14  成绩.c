#include<stdio.h>
#include<stdlib.h>

int main()
{
	char grade;
	int score;
	printf("please input the grade:");
	scanf("%c",&grade);
	switch(grade)
	{
		case 'A' : score=4;break;
		case 'B' : score=3;break;
		case 'C' : score=2;break;
		case 'D' : score=1;break;
		case 'F' : score=0;break;
		default : printf("input error");exit (-1);
	}
	printf("score=%d",score);
	return 0 ;																									
}
