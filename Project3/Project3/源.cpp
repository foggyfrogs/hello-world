#include<stdio.h>
int main()
{
	int a, b;
	printf("������a��ֵ\n");
	scanf("%d", &a);
	printf("������b��ֵ\n");
	scanf("%d", &b);
	if(a>b)
	{
		printf("�ϴ�ֵ�� %d", a);
	}
	if (a < b)
	{
		printf("�ϴ�ֵ�� %d", b);
	}
	else
	{
		printf("a��bһ����\n");
	}
	return 0;
}