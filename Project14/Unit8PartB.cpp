// Abigail Reitz
// CIS 1202 803
// July 30, 2025

#include <iostream>

using namespace std;

template <typename T>
T half(T num) {
	return (num / 2); // return the value divided by 2
}

int main() {
	double a = 7.0;
	cout << half(a) << endl;
	return 0;
}