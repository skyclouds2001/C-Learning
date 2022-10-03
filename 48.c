/*
输入说明	
输入数据由四个整数m，n，q，r构成，m为被除数，n为除数，q和r为小明的弟弟计算出的商和余数。整数之间用空格分隔，
所有整数取值范围在（-100000~100000），n不为0。
输出说明	
如果验算结果正确，输出yes，否则输出正确的商和余	
输入样例：
样例1：
10 3 3 1
样例2：
10 3 3 2
输出样例	
样例1输出：
yes
样例2输出：
3 1
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,q,r;
	div_t output;
	scanf("%d%d%d%d",&m,&n,&q,&r);
	output=div(m,n);
	if(output.quot==q&&output.rem==r)   
	    printf("yes");
	else
	    printf("%d %d",output.quot,output.rem);
	return 0;
}
