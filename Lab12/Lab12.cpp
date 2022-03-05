#include<iostream>

/*7.Царевна-лягушка съедает ежедневно на 20% комаров больше, чем в предыдущий день, и еще два комара.
Определить, через сколько дней количество съеденных комаров превысит 100, если в первый день было съедено 12 комаров*/

int DaysCount(int sum, int day)
{
	printf("sum = %d; day = %d, lvl = %d\n", sum, day, day);
	if (sum > 100) return day;
	return DaysCount(sum+=sum/5+2, ++day);
}

int main()
{
	system("chcp 1251");
	system("cls");

	printf("Кол-во дней, чтобы съесть больше 100 комаров: %d", DaysCount(12, 1));

	return 0;
}