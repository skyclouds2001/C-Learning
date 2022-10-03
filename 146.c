/*
题目描述：输入一个0~9的一位整数，输出其对应的英文单词。要求用switch结构完成。

示例：
输入：0
输出：zero
输入：8
输出：eight
*/

#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	switch(t)
	{
		case 0:printf("zero");break;
		case 1:printf("one");break;
		case 2:printf("two");break;
		case 3:printf("three");break;
		case 4:printf("four");break;
		case 5:printf("five");break;
		case 6:printf("six");break;
		case 7:printf("seven");break;
		case 8:printf("eight");break;
		case 9:printf("nine");break;
	}
	return 0;
 } 
