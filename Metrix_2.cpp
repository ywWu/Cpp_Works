#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int no = 1;
	int WaitForShutdown;

	for (int i = 1; i < 7; ++i)
	{
		for (int j = 1; j <= 7; ++j)
		{
			cout << "(" << i << "," << j << ")" << "   ";
		}
		cout << "\n";
	}

	cin >> WaitForShutdown;
	return 0;
}