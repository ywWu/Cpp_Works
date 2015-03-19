#include "iostream"
#include "cmath"

using namespace std;

int main(int argc, char const *argv[])
{
	double i = 1.0;
	double temp_i;
	double x;

	int WaitForShutdown;

	cout << "Please input X: ";
	cin >> x;
	i += x;
	temp_i = x;

	for (int k = 2; abs(temp_i) >= 1e-8; ++k)
	{
		temp_i *= (-1)*(x/k);
		i += temp_i;
	}
	cout << i << "\n";
	cin >> WaitForShutdown;
	return 0;
}