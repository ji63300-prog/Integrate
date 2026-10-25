
#include <iostream>
#include <functional>
using namespace std;

double integrate(function<double(double)> f, double a, double b, int num)
{
	double h = (b - a) / num;
	double area = 0;
	for (int i = 0; i < num; i++){
		area += h * (f(a + i * h));
	}

	return area;
}

double cubed(double x){
	return x * x * x;
}

double linear(double x) {
	return x;
}

double squared(double x) {
	return x * x;
}

int main()
{
	cout << "Integral of x^3 from 0 to 1: " << integrate(cubed, 0, 1, 100) << endl;
	cout << "Integral of x from 0 to 1: " << integrate(linear, 0, 1, 100) << endl;
	cout << "Integral of x^2 from 0 to 1: " << integrate(squared, 0, 1, 100) << endl;
    
}

