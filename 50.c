/*
����	
ѡ�ų���
���	
���̿���
ʱ������	
1S
�ڴ�����	
256Kb
��������	
С����������һ���µ�QQ���룬ϵͳ������������ɸ����빩��ѡ��С����ѡ��ԭ���ǣ�
1. ѡ�����к����и�λ����֮�����ĺ��롣
2. ����ж�������λ����֮����ͬ��ѡ����ֵ���ĺ��롣
����дһ���������С��ѡ��һ��QQ���롣
����˵��	
�������������й��ɣ���һ��Ϊһ������n��ʾ��n����ѡ����(0<n<100)���ڶ�����n������������ʾ������ѡ�ĺ��룬ÿ�����볤�Ȳ�����9λ����
ÿ������֮���ÿո�ָ�����ÿ�����붼����ͬ��
���˵��	
�������С����ѡ��ԭ��ѡ���ĺ��롣
��������	
5
10000 11111 22222 333 1234
�������	
22222
*/

#include<stdio.h>
int main()
{
	short n,i,t,sum,maxi;
	scanf("%hd",&n);
	int a[n],x;
	short b[n];
	maxi=0;
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);	
	for(i=0;i<n;i++)
	{
		x=a[i];
		sum=0;
		while(x!=0)
		{
			t=x%10;
			sum+=t;
			x/=10;
		}
		b[i]=sum;
		if(b[maxi]<b[i]||b[maxi]==b[i]&&a[i]>a[maxi])
		    maxi=i;
	}
	printf("%d",a[maxi]);
	return 0;
}