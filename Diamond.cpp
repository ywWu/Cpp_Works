#include "iostream"
#include "cstdlib"

using namespace std;

int main()
{
	int CountOfLines = 20;
	int CountOfRows;
	int WaitForShutdown;

	CountOfRows = CountOfLines;

	for ( int i = (CountOfLines*4+1) ; i > 0 ; --i )
	{
		if (i%2)
		{
			for ( int k = 0 ; k <= abs( CountOfRows-((i+1)/2) ) + CountOfRows ; ++k )
			{
				if( k < ( 3*CountOfRows - 2*abs(i-CountOfRows-1) ) )
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			cout << "\n";
		}
	}
	cin >> WaitForShutdown;
	return 0;
}

