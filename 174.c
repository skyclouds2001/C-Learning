#include<stdio.h>
#define max(a,b) (a>b)?a:b
int W[201], dp[201][20001];
int main()
{
	
	int n=0,i=0,j=0,sumA=0, sum=0;/*����A�õ�����Զ�ǽ��ٵ��Ǹ�*/
	scanf( "%d", &n);
	for(i = 1; i <= n; i++)/*i��ָ��i����Ʒ*/
	{
		scanf( "%d", &W[i] );
		sum += W[i];
	}
	for(i = 1; i <= n; i++)
	{
		if (W[i] > sum/2)/*�����Ʒĳ����ֵ�����ܼ�ֵ��һ��,������Ʒ����A,����Ҫ�ټ���*/
		{
			dp[n][sum/2] =sum-W[i];
			break;
		}
		for(j = 1; j <= sum/2; j++)/*i,j�ֱ��ָ��i����Ʒ�ͱ���ʣ������*/
		{
			if(W[i] > j)/*ͬ����,��Ʒ�������ڱ���ʣ������,��͵*/
				dp[i][j] = dp[i-1][j];
			else 
				dp[i][j] = max( dp[i-1][j] , dp[i-1][j-W[i]] + W[i]);
		}
	}
	sumA = dp[n][sum/2];/*���˱Ƚ�ϲ����һ����*/
	printf("%d\n", sum - 2 * sumA);/*��ΪA���ǵõ����ٵ��Ǹ�,����Ҫ�ټ��Ͼ���ֵ*/
	return 0;
 } 
