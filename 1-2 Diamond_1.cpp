#include "iostream"
#include "cstdlib"

using namespace std;

int main() {
	int CountOfLines = 5;
	int WaitForShutdown;

	for ( int i = 1, temp_i = 1; i <= 2*CountOfLines - 1 ; ++i )
	{
		for (int j = 1; j < abs(CountOfLines - i) + CountOfLines; ++j)
		{
			cout << " ";
		}
		for (int k = 1; k <= 1+2*(temp_i-1); ++k)
		{
			cout << "*";
		}
		cout << "\n";
		if (i >= CountOfLines)
		{
			--temp_i;
		}
		else
		{
			++temp_i;
		}
	}
	cin >> WaitForShutdown;
	return 0;
}

