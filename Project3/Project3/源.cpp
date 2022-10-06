#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入a的值\n");
	scanf("%d", &a);
	printf("请输入b的值\n");
	scanf("%d", &b);
	if(a>b)
	{
		printf("较大值是 %d", a);
	}
	if (a < b)
	{
		printf("较大值是 %d", b);
	}
	else
	{
		printf("a与b一样大\n");
	}
	return 0;
}