/*
题目描述：
口袋里有12个球，3个红色，4个白色，5个黑色，从中任意取出8个球，列出所有可能的取法

输出格式：每一行分别输出红色球、白色球、黑色球个数，以空格分隔；
                每行表示一种选择情况，列出所有可能结果。
                输出结果按照红球个数从小到大排序，当红球个数相同时按照白球个数从小到大排序

示例：0 3 5
      0 4 4
      1 2 5
      ......
*/

#include<stdio.h>
int main()
{
	int red,white,black;
	for(red=0;red<=3;red++)
	{
		for(white=0;white<=4;white++)
		{
			for(black=0;black<=5;black++)
			{
				if(red+white+black==8)
				    printf("%d %d %d \n",red,white,black);
			}
		}
	}
	return 0;
}
