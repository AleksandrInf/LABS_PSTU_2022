#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
    int n, num, max, min;

    cout << "Введите количество чисел последовательности" << endl;
    cin >> n;

    cout << "Введите первое число:" << endl;
    cin >> num;
    max = num;
    min = num;

    for (int i = 2; i <= n; i++)
    {
        cout << "Введите следующее число" << endl;
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    cout << "Сумма максимального и минимального элементов: " << (max + min) << endl;

    return 0;
}
