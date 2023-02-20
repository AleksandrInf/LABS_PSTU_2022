#include <iostream>
#include <vector>
using namespace std;

double dotProduct(vector<double> v1, vector<double> v2) {
	double result = 0.0;
	for (int i = 0; i < v1.size(); i++) {
		result += v1[i] * v2[i];

	}
	return result;
}

int main() {
	vector<double> v1 = { 1.0, 2.0, 3.0 };
	vector<double> v2 = { 4.0, 5.0, 6.0 };
	double result = dotProduct(v1, v2);
	cout << "Скалярное произведение векторов v1 и v2 равно = " << result << endl;
	return 0;
}
