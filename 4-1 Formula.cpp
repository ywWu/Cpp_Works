#include "iostream"
#include "cmath"

using namespace std;

int main(int argc, char const *argv[])
{
	double x = 0;
	double a = 0, b = 0, c = 0;
	double formula_1, formula_2, formula_3;
	int WaitForShutdown;

	cout << "Please input x :";
	cin >> x;
	a = 2.3;
	b = 1.15;
	c = 4;

	formula_1 = sqrt(pow(sin(x), 2.5));
	formula_2 = 0.5*((a*x) + (a+x)/(4*a));
	formula_3 = pow(c, sqrt(x))/(sqrt(2*x));

	cout << formula_1 << "\n" << formula_2 << "\n" << formula_3 << "\n";
	cin >> WaitForShutdown;

	return 0;
}