#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;

	int* ptr = &a;
	cin >> b;

	*ptr = b;

	cout << *ptr << endl;

	return 0;
}

