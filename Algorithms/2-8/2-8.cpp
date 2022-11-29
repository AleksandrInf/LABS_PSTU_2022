#include <iostream>

using namespace std;
int main() {
    int cl;
    cin >> cl;

	for (int i = 0; i < cl; i++) {
		cout << '*';
	}
	cout << endl;
	for (int i = 0; i < cl - 2; i++) {
		cout << '*';
		for (int j = 0; j < cl - 2; j++) {
			cout << ' ';
		}
		cout << '*' << endl;
	}
	for (int i = 0; i < cl; i++) {
		cout << '*';
	}
	cout << endl;
}