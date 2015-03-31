#include "iostream"
#include "cmath"

using namespace std;

int main(int argc, char const *argv[])
{
	double t = 18.00, k = 13.00;
	double ans = 1.00;
	double temp_t, temp_k, temp_ans = 1.00;
	int WaitForShutdown
	temp_t = 1.00;
	temp_k = 1.00;

	while(temp_k<t)
	{
		ans *= (++temp_k);
	}
	while(temp_k < t-k)
	{
		temp_ans *= temp_k++;
	}
	cout << ans/temp_ans;
	cin >> WaitForShutdown;
	return 0;
}