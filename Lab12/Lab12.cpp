#include<iostream>

/*7.�������-������� ������� ��������� �� 20% ������� ������, ��� � ���������� ����, � ��� ��� ������.
����������, ����� ������� ���� ���������� ��������� ������� �������� 100, ���� � ������ ���� ���� ������� 12 �������*/

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

	printf("���-�� ����, ����� ������ ������ 100 �������: %d", DaysCount(12, 1));

	return 0;
}