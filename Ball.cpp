#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	double x = 100;
	double sum = 100;
	int WaitForShutdown;

	for (int i = 1; i <= 10; ++i)
	{
		sum += x;
		x /=2.0;
	}
	cout << sum << "\n" << x << "\n";

	cin >> WaitForShutdown;
	return 0;
}