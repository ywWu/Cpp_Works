#include "iostream"

using namespace std;

int main()
{
	int num        = -1234567;
	int *point_num = (&num);
	int WaitForShutdown;

	if (num<0)
	{
		cout << "-";
		num=-num;
	}
	for (int i = 31; i >= 0; --i)
	{
		if (!(num&1<<i))
			;
		else
			cout << (*point_num >> i & 1) << (i==31||i==23 ? "-":"");
	}

	cout <<"\n";
	cin >> WaitForShutdown;

	return 0;
}