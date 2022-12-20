#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	int r = 0;

	cout << "Введите натуральное число N" << endl;
	cin >> N;

	while (N > 0)
	{
		r = r * 10 + N % 10;
		N /= 10;
	}
	cout << "Введенное число в обратном порядке будет выглядеть так: " << r << endl;

	return 0;
}