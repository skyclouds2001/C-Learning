/*
车流量计算
问题描述： 
十字路口南北方向上的绿灯时间为60秒，红灯时间为30秒（不考虑红绿灯转换时间），每秒平均车流量为3辆，输入一些整数m（0<m<2^29）
表示从0秒开始的总时长（秒），初始时刻为绿灯，计算经历该时长结束时刻的车流总量。
输入说明：
一组整形数据（表示时长）通过键盘输入，输入的数据m（0<m<2^29），0表示输入结束。
输出说明：
 在一行上输出该时长结束时刻的车流总量，用空格分隔每个输出。
输入样例：
 90  150   191  0
输出样例：
 180  360  393
 */
 
 #include<stdio.h>
 
 int main()
 {
 	int N=10,i=1,j;
 	int m[N];
 	int time;
 	int sum;
 	short n,a,b;
 	printf("输入一些表示从第0秒开始的总时长（秒）整数m（0<m<2^29）,以0为结尾 \n");
    m[0]=1;
 	while(m[i-1]!=0)
 	{
 		scanf("%d",&m[i]);
 		if(i==N)  N++;
		i++;
	 }
	n=i-2;
	for(j=1;j<=n;j++)
	{
		time=m[j];
		a=time/90;
		b=time%90;
		sum=a*3*60;
		if(b<=60)  sum+=(b*3);
		else  sum+=(60*3);
		printf("%d ",sum);
	}
	return 0; 
 }
