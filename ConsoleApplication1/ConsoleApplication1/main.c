#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1;
	int num_2;
	int add_1;
	printf("��һ������\n");
	scanf_s("%d", &num_1);
	printf("�ڶ�������\n");
	scanf_s("%d", &num_2);
	add_1 = num_1 + num_2;
	printf("��Ϊ: %d\n", add_1);
	system("pause");
	//getchar();
	return 0;
}