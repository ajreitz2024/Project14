// Abigail Reitz
// CIS 1202 803
// July 30, 2025

#include <iostream>

using namespace std;

template <typename T>
T half(T num) {
	return (num / 2); // return the value divided by 2
}

int half(int num) { // if the data type is int, use this version of the function
	float newNum = static_cast<float>(num); // turn value of num into a float and assign it to newNum
	newNum = newNum / 2; // divide by 2 to find half
	newNum = round(newNum); // round number
	num = static_cast<int>(newNum); // set the final value of newNum as an int and assign it to num
	return num; // return the final value of num
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	return 0;
}