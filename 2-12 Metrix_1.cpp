#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int no = 1;
	int WaitForShutdown;

	for (int i = 1; i < 7; ++i)
	{
		cout << i << "      ";
		for (int j = 0; j < 7; ++j)
		{
			int temp_i;
			if ( i-1+j >= 7)
			{
				temp_i = i-1+j-7;
			}
			else
			{
				temp_i = i-1+j;
			}
			cout << temp_i << "   ";
		}
		cout << "\n";
	}

	cin >> WaitForShutdown;
	return 0;
}