#include<stdio.h>
#include "add_1.h"
#include<stdlib.h>

int main()
{
	int a;
	int b;
	int c;
	printf("�������һ����: \n");
	scanf_s("%d", &a);
	printf("������ڶ�����: \n");
	scanf_s("%d", &b);
	c = add(a, b);
	printf("��Ϊ: %d\n",c);
	printf("-------------------------S");

	system("pause");
	return 0;

}
