#include "iostream"
#include "fstream"
#include "string"

using namespace std;

//-------------------------key of encoder
const char Key[]="4962873";
//-------------------------

//-------------------------encoder
string encoder(string &str)
{
	string output(str);
	for (int i = 0; i < str.length(); ++i)
	{
		output[i] += Key[i%7] - '0';
		if (output[i]>'Z')
		{
			output[i] -= 91;
		}
	}
	return output;
}
//-------------------------

//-------------------------decoder
string decoder(string &str)
{
	string output(str);
	for (int i = 0; i < str.length(); ++i)
	{
		output[i] -= Key[i%7] - '0';
		if (output[i]<' ')
		{
			output[i] += 91;
		}
	}
	return output;
}
//-------------------------

int main(int argc, char const *argv[])
{
	ifstream in("date.txt");
	string s;
	int WaitForShutdown;

	while(getline(in,s))
	{
		string temp_str = encoder(s);
		cout << temp_str << "\n";
		cout << (s == decoder(temp_str)? s+"\n" : "Decode Failed!\n");
	}
	cin >> WaitForShutdown;
	return 0;
}