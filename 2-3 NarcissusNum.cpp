#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int i = 1;
	int a, b, c;
	int WaitForShutdown;

	for (int j = 100; j <= 999; ++j)
	{
		a = (j%10);
		b = ((j%100)-a)/10;
		c = (j-10*b-a)/100;
		if ((a*a*a+b*b*b+c*c*c) == j)
		{
			cout << "No." << i << " :" << j << "\n";
			++i;
		}
	}
	cin >> WaitForShutdown;
	return 0;
}