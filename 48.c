/*
����˵��	
�����������ĸ�����m��n��q��r���ɣ�mΪ��������nΪ������q��rΪС���ĵܼܵ�������̺�����������֮���ÿո�ָ���
��������ȡֵ��Χ�ڣ�-100000~100000����n��Ϊ0��
���˵��	
�����������ȷ�����yes�����������ȷ���̺���	
����������
����1��
10 3 3 1
����2��
10 3 3 2
�������	
����1�����
yes
����2�����
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
