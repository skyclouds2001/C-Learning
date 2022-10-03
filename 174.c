#include<stdio.h>
#define max(a,b) (a>b)?a:b
int W[201], dp[201][20001];
int main()
{
	
	int n=0,i=0,j=0,sumA=0, sum=0;/*假设A得到的永远是较少的那个*/
	scanf( "%d", &n);
	for(i = 1; i <= n; i++)/*i代指第i个物品*/
	{
		scanf( "%d", &W[i] );
		sum += W[i];
	}
	for(i = 1; i <= n; i++)
	{
		if (W[i] > sum/2)/*如果物品某个价值大于总价值的一半,其余物品将给A,不需要再计算*/
		{
			dp[n][sum/2] =sum-W[i];
			break;
		}
		for(j = 1; j <= sum/2; j++)/*i,j分别代指第i个物品和背包剩余容量*/
		{
			if(W[i] > j)/*同样的,物品重量大于背包剩余容量,不偷*/
				dp[i][j] = dp[i-1][j];
			else 
				dp[i][j] = max( dp[i-1][j] , dp[i-1][j-W[i]] + W[i]);
		}
	}
	sumA = dp[n][sum/2];/*个人比较喜欢单一出口*/
	printf("%d\n", sum - 2 * sumA);/*因为A总是得到较少的那个,不需要再加上绝对值*/
	return 0;
 } 
