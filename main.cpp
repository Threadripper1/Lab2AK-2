#include "calculator.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	double a = 72.0;
	double b = 28.0;
	Calculator calc;
	cout << "Argument a = " << a << endl;
	cout << "Argument b = " << b << endl;
	cout << "The result of a and b folding it is = " << calc.Add(a, b) << endl;
	return 0;
}
