#include<iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	float num1;
	float num2;
	float* tnum1;
	float* tnum2;
	float sum = 0;

	std::cout << "¬ведите первое число " << std::endl;
	std::cin >> num1;

	std::cout << "¬ведите второе число " << std::endl;
	std::cin >> num2;

	tnum1 = &num1;
	tnum2 = &num2;

	sum = *tnum1 + *tnum2;

	std::cout << "—умма равна " << sum << std::endl;

	return 0;
}