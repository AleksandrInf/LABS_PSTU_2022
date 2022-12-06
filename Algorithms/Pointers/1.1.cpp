#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	
	int* p = &a;
	int* p1 = &b;

	cout << *p + *p1 << endl;

 }
