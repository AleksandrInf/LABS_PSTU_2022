#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double n, S;
	bool flag = false;

	cout << "Введите количество элементов n" << endl;
	cin >> n;
	cout << "Введите искомый элемент S" << endl;
	cin >> S;

	for (int i = 1; i <= n; i++)
	{
		if (S == sin(n + (i / n)))
		{
			flag = true;
		}
	}
	if (flag)
	{
		cout << "Наличие элемента S среди других элементов последовательности" << endl;
	}
	else if (!flag)
	{
		cout << "Отсутсвие элемента S среди других элементов последовательности" << endl;
	}
	return 0;
}
