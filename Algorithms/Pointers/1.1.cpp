#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	int nach;
	
	int* p = &a;
	int* p1 = &b;
	nach = *p;
	
	a = *p1;
	b = nach;
	
	

	cout << *p << endl;
	cout << *p1 << endl;


 }
