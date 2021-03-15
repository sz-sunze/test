#include<stdio.h>
#include "add_1.h"
#include<stdlib.h>

int main()
{
	int a;
	int b;
	int c;
	printf("请输入第一个数: \n");
	scanf_s("%d", &a);
	printf("请输入第二个数: \n");
	scanf_s("%d", &b);
	c = add(a, b);
	printf("和为: %d",c);
	printf("-------------------------S");

	system("pause");
	return 0;

}

/*
int add()
{
int num_1;
int num_2;
int add_1;

add_1 = num_1 + num_2;
return add_1;

}*/