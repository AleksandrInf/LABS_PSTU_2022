#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;
	int* tnum1;
	int* tnum2;
	int sum = 0;

	std::cout << "������� ������ ����� " << std::endl;
	std::cin >> num1;

	std::cout << "������� ������ ����� " << std::endl;
	std::cin >> num2;

	tnum1 = &num1;
	tnum2 = &num2;

	sum = *tnum1 + *tnum2;

	std::cout << "����� ����� " << sum << std::endl;

	return 0;
}