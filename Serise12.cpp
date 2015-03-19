#include "iostream"
#include "cmath"

using namespace std;

int main(int argc, char const *argv[])
{
	int i = 1;
	int temp_i;
	int x;

	int WaitForShutdown;

//	cout << "Please input X: ";
//	cin >> x;
//	i += x;

	temp_i = 2;
	i += temp_i;

	for (int k = 3; k <= 12; ++k)
	{
		temp_i *= k;
		i += temp_i;
	}
	cout << i << "\n";
	cin >> WaitForShutdown;
	return 0;
}