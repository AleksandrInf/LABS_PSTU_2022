#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, s, k;
    bool flag = false;

    cin >> n >> s;

    while (n > 0 && !flag)
    {
        k = n % 10;
        if (k == s)
        {
            flag = true;
            cout << "����� �������" << endl;
        }
        else
        {
            n /= 10;
        }
    }

    if (!flag)
    {
        cout << "����� �� �������" << endl;
    }

    return 0;
}