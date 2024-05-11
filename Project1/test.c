#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



enum Color
{
	red,
	blue,
	yellow
};
int main()
{
	int num1=0 ;
	int num2 =0;
	int sum =0;
	enum Color cor = blue;
	printf("请输入要相加的两个整数\n");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	printf("%d\n",red);
	return 0;
}