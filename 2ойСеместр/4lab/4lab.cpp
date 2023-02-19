#include <iostream>
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100 - 50;
		cout << a[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		if (a[i] % 7 != 0) {
			cout << a[i] << ' ';
		}
	}
	cout << endl;
	
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0) {
			cout << a[i] << ' ' << '0' << ' ';
		}
	}
	return 0;
}
