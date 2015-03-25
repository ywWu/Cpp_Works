#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int sum = 100;
	int n10 = 10, n5 = 5, n1 = 1;
	int no = 1;
	int WaitForShutdown;

	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j < 20; ++j)
		{
			for (int k = 1; k < 100; ++k)
			{
				if (i*n10 + j*n5 + k*n1 == sum)
				{
					cout << "No." << no << ": " << "(10, 5, 1)" << i << "-" << j << "-" << k;
					cout << "\n";
					++no;
				}
			}
		}
	}

	cin >> WaitForShutdown;
	return 0;
}