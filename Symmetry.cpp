#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	double sqrtm;
	int i = 1;
	int WaitForShutdown;

	for (int j = 100; j <= 999; ++j)
	{
		for (int k = 2; k < (sqrtm = sqrt(j*1.0)); ++k)
		{
			if (j%k == 0)
			{
				break;
			}
			else
			{
				if( k+1 >= (sqrtm = sqrt(j*1.0)) )
				{
					int a, b, c;
					a = (j%10);
					b = ((j%100)-a)/10;
					c = (j-10*b-a)/100;
					if (a == c)
					{
						cout << "No." << i << " :" << j << "\n";
						++i;
					}
				}
			}
		}
	}
	cin >> WaitForShutdown;
	return 0;
}