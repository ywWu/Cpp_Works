#include "iostream"
#include "string"
#include "fstream"

using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in("date.txt");
	int sum = 0;
	string s;
	int WaitForShutdown;

	while(getline(in,s))
	{
		if (s.find("25")!=string::npos)
		{
			if (s.find('*')!=string::npos)
				sum += 2;
			else
				sum ++;
		}
	}
	cout << "The number of 25 in a month is:" << sum << endl;
	cin >> WaitForShutdown;

	return 0;
}