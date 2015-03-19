#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int line = 10;
	int raw;
	int WaitForShutdown;

	for (int i = 1; i <= line; ++i)
	{
		for (int j = 0; j < line - i; ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < i; ++k)
		{
			cout << "#";
		}
		cout << "      ";
		for (int l = 0; l < i; ++l)
		{
			cout << "S";
		}
		cout << "\n";
	}

	cin >> WaitForShutdown
	return 0;
}