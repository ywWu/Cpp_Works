#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 1;
	int WaitForShutdown;

	for (int i = 10; i > 1 ; --i)
	{
		x = 2*(x + 1);
	}
	cout << x << "\n";
	cin >> WaitForShutdown;
	return 0;
}