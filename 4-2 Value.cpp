#include "iostream"
#include "cmath"

using namespace std;

int main(int argc, char const *argv[])
{
	int WaitForShutdown;
	int e = 1, f = 4, g =2;
	double m = 10.5, n = 4, k;
	k=(e+f)/g+sqrt(n)*1.2/g + m;
	cout << k << "\n";

	double x = 2.5, y = 4.7;
	int a = 7;
	cout << x+a%3*(int)(x+y)%2/4 << "\n";

	int b;
	a = 2;
	b = 5;
	a++;
	b++;
	cout << a+b << "\n";

	cin >> WaitForShutdown;

	return 0;
}