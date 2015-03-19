#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 1;
	int year = 1;
	int n;
	int WaitForShutdown;

	cout << "Please input N : ";
	cin >> n;

	for (int i = 1; i <= (n/4); ++i)
	{
		x *= 2;
	}
	cout << x << "\n";

	cin >> WaitForShutdown;
	return 0;
}