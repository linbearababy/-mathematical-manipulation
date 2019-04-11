#include <iostream>
using std::cout; using std::cin; using std::endl; using std::fixed;
#include<iomanip>
using std::setprecision;

int main() {
	cout << fixed << setprecision(2);
	double num1 , num2 , num3 , num4;
	cin >> num1 >> num2 >> num3 >> num4;
	cout << num1 + num3 << ' ' << '+' << ' ' << num2 + num4 << 'i' << endl;
	cout << num1 - num3 << ' ' << '+' << ' ' << num2 - num4 << 'i' <<endl; 
	double Multiplication_1 = num1 * num3 - num2 * num4;
	double Multiplication_2 = num1 * num4 + num2 * num3;
	cout << Multiplication_1 << ' ' << '+' << ' ' << Multiplication_2 << 'i' << endl;
	double divide_1 , divide_11 , divide_2;
	divide_1 = num1*num3+num2*num4;
	divide_11 = num1*num3-num2*num4;
	divide_2 = num3*num3+num4*num4;
	cout << divide_1/divide_2 << ' ' << '+' << ' ' <<divide_11/	divide_2 << 'i' <<endl;
	return 0;
}
