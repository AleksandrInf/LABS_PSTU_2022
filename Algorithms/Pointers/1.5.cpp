#include<iostream>
using namespace std;
void fact(int* a, int* b)
{
	for (int i = 1; i <= *a; i++)
	{
		*b *= i;
	}

}
int main()
{
	int num;
	int result = 1;
	cin >> num;

	fact(&num, &result);

	cout << num << result << endl;

	return 0;
}

