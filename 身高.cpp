#include <stdio.h>
int main ()
{
	float a,b,c;
	printf("请输入父亲的身高："); 
	scanf("%f",&a);
	printf("请输入母亲的身高："); 
	scanf("%f",&b);
	c=(a+b)*0.54;
	printf("预测孩子的身高：%.2f",c);
	return 0;
 } 
