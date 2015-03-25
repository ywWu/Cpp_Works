#include "iostream"
#include "cmath"
#include "vector"

using namespace std;

int main(int argc, char const *argv[])
{
	int a[10] = {6, 3, 7, 1, 4, 8, 2, 9, 11, 5};
	double E  = 0.0;
	double V  = 0.0;
	int WaitForShutdown;

	vector<int> va(a, a+10);

	for (int i = 0; i < va.size(); ++i)
	{
		E += va[i];
	}
	E /= va.size();

	for (int k = 0; k < va.size(); ++k)
	{
		V += (va[k]-E)*(va[k]-E);
	}
	V /= va.size();
	V = sqrt(V);
	
	cout << "Var = " << V << "\n";

	cin >> WaitForShutdown;
	return 0;
}