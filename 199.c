/*
一百个铜钱买了一百只鸡，其中公鸡一只5钱、母鸡一只3钱、小鸡一钱3只，
问:一百只鸡中公鸡、母鸡、小鸡各多少。

输出格式：每一行分别输出公鸡、母鸡、小鸡个数，以空格分隔；
                每行表示一种计算结果，列出所有可能结果；
                计算结果按照公鸡的数目从小到大排序。
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<20;i++)
	{
		for(j=1;j<33;j++)
		{
			for(k=3;k<300;k+=3)
			{
				if((i*5+j*3+k/3)==100&&i+j+k==100)
				{
					printf("%d %d %d \n",i,j,k);
				}
			}
		}
	}
	return 0;
}
