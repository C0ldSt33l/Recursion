#include<iostream>

int main()
{
	system("chcp 1251");
	system("cls");

	int day = 1;

	for (int sum = 12; sum <= 100; sum += sum / 5 + 2) day++;

	printf("Кол-во дней, чтобы съесть больше 100 комаров: %d\n", day);

	return 0;
}