#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int no = 1;
	int WaitForShutdown;

	for (int j = 1; j <= 1000; ++j)
	{
		int i = 1;
		for (int k = 2; k < j; ++k)
		{
			if (j%k == 0)
			{
				i += k;
			}
		}
		if (i == j)
		{
			cout << "No." << no << ":" << j << "\n";
			++no;
		}
	}

	cin >> WaitForShutdown;
	return 0;
}