 /*
 1.��������
����������
��������������һ�������������������������㲢��������������͡�������̡���֮һ����ע������������������ʱ����������Ϊ�㡣
����˵����
ʹ��scanf()������������������һ�����������ʽ������������
���˵����
���ʹ��printf()��������ʽ�����������
����������
5%2
���������
5%2=1
*/
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int main()
 {
 	int a,b,result;
 	char op;
 	scanf("%d%c%d",&a,&op,&b);
 	if(op=='+')
 	{
 		result=a+b;
	 }
	 else if(op=='-')
	 {
	 	result=a-b;
	  }
	 else if(op=='*')
	 {
	 	result=a*b;
	  }
	 else if(op=='/')
	 {
	 	if(b==0)  
		{
		    printf("input error!");
		 	exit(-1);
		 }
		result=a/b;
	 } 
	 else if(op='%')
	 {
	 	if(b==0)
	 	{
	 		printf("input error!");
		 	exit(-1);
		 }
		result=a%b;
	 }
	 else 
	 {
	 	printf("input error!");
	 	exit(-1);
	 }
	printf("%d%c%d=%d",a,op,b,result);
	return 0;	
	 
	
 }
