#include <iostream>
using namespace std;

int main() {
	float a;
	cin >> a;
	float b;
	cin >> b;

	float* p = &a;
	float* p1 = &b;

	cout << *p + *p1 << endl;

}
