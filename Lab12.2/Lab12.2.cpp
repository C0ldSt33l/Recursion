#include<iostream>

int main()
{
	system("chcp 1251");
	system("cls");

	int day = 1;

	for (int sum = 12; sum <= 100; sum += sum / 5 + 2) day++;

	printf("���-�� ����, ����� ������ ������ 100 �������: %d\n", day);

	return 0;
}