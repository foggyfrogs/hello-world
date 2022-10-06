#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(x, y)
{
	int z = x + y;
	return z;
}
int main()
{
	int x = 0;
	int y = 0;
	
	int a = 0;
	printf("请输入a的值\n");
	
	scanf("%d", &a);
	int b = 0;
	printf("请输入b的值\n");
	
	scanf("%d", &b);
	int sum = Add(a, b);
	printf("sum = % d\n", sum);
	return 0;
}