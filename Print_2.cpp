#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int WaitForShutdown;

	for (int i = 0; i <= 10; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < 10-i; ++k)
		{
			cout << "ST";
		}
		cout << "S\n";
	}

	cin >> WaitForShutdown;
	return 0;
}