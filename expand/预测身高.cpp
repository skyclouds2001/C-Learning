/*������
ÿ������ĸ�Ķ������Լ����ӳ��˺����ߣ����й���������֪ʶ������ͳ�Ʒ���������
Ӱ��С�����˺���ߵ����ذ����Ŵ�����ʳϰ�������������ȡ�С�����˺��������丸ĸ����ߺ�������Ա�������ء�
��faHeightΪ�丸��ߣ�moHeightΪ��ĸ��ߣ����Ԥ�⹫ʽΪ��
���Գ���ʱ��� = (faHeight+moHeight)��0.54cm
Ů�Գ���ʱ��� = (faHeight��0.923+moHeight)/2cm
���⣬��ϲ����������������������2%���������õ���ʳϰ�ߣ�����������1.5%��
���̴Ӽ��������û����Ա𡢸�ĸ��ߡ��Ƿ�ϲ�������������Ƿ������õ���ʳϰ�ߵ����������ø������Ԥ�ⷽ������߽���Ԥ�⡣
����˵����
�����û����Ա�sex���ַ��ͱ������ַ�F��ʾŮ�ԣ�M��ʾ���ԣ�����ĸ��ߣ������ͱ�������
�Ƿ�ϲ����������sports���ַ��ͱ������ַ�Y��ʾϲ����N��ʾ��ϲ������
�Ƿ������õ���ʳϰ��diet���ַ��ͱ������ַ�Y��ʾ���ã�N��ʾ���ã������ݼ��Կո�ָ���
���˵����
���һ�����������ݣ�����1λС��������ʾԤ����ߡ�
��������
����1����
M 175 165 Y N
����2����
F 175 165 N N
�������
����1���
187.3cm
����2���
163.3cm
*/
#include<stdio.h>
int main()
{
	double faHeight,moHeight,height,Height; 
	char sex,sports,diet;
    scanf("%c %lf %lf %c %c",&sex,&faHeight,&moHeight,&sports,&diet);
	if(sex=='M')
	{
		height=(faHeight+moHeight)*0.54;
		if(sports=='Y'&&diet=='Y')
			Height=height*(1+0.02+0.015);
		if(sports=='N'&&diet=='N')
			Height=height;
		if(sports=='Y'&&diet=='N')
			Height=height*(1+0.02);
		if(sports=='N'&&diet=='Y')
			Height=height*(1+0.015);
	}
	else if(sex=='F')
	{
		height=(faHeight*0.923+moHeight)/2;
		if(sports=='Y'&&diet=='Y')
			Height=height*(1+0.02+0.015);
		if(sports=='N'&&diet=='N')
			Height=height;
		if(sports=='Y'&&diet=='N')
			Height=height*(1+0.02);
		if(sports=='N'&&diet=='Y')
			Height=height*(1+0.015);
	}
	printf("%.1fcm",Height);
	return 0;
}
