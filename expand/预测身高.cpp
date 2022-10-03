/*描述：
每个做父母的都关心自己孩子成人后的身高，据有关生理卫生知识与数理统计分析表明，
影响小孩成人后身高的因素包括遗传、饮食习惯与体育锻炼等。小孩成人后的身高与其父母的身高和自身的性别密切相关。
设faHeight为其父身高，moHeight为其母身高，身高预测公式为：
男性成人时身高 = (faHeight+moHeight)×0.54cm
女性成人时身高 = (faHeight×0.923+moHeight)/2cm
此外，若喜爱体育锻炼，则可增加身高2%；若有良好的饮食习惯，则可增加身高1.5%。
请编程从键盘输入用户的性别、父母身高、是否喜爱体育锻炼、是否有良好的饮食习惯等条件，利用给定身高预测方法对身高进行预测。
输入说明：
输入用户的性别sex（字符型变量，字符F表示女性，M表示男性）、父母身高（浮点型变量）、
是否喜爱体育锻炼sports（字符型变量，字符Y表示喜爱，N表示不喜爱）、
是否有良好的饮食习惯diet（字符型变量，字符Y表示良好，N表示不好），数据间以空格分隔。
输出说明：
输出一个浮点型数据（保留1位小数），表示预测身高。
输入样例
样例1输入
M 175 165 Y N
样例2输入
F 175 165 N N
输出样例
样例1输出
187.3cm
样例2输出
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
