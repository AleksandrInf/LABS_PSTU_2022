#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a1;
	int a2;
	int* b1;
	int* b2;

	std::cout << "������� �������� ������ ����������" << std::endl;
	std::cin >> a1;

	b1 = &a1;

	std::cout << "������� �������� ������ ����������" << std::endl;
	std::cin >> a2;

	b2 = &a2;

	int tmp = *b1;
	*b1 = *b2;
	*b2 = tmp;

	std::cout << "����� ������ �������� ������ ���������� ��������� " << *b1 << std::endl;
	std::cout << "����� ������ �������� ������ ���������� ��������� " << *b2 << std::endl;

	return 0;
}