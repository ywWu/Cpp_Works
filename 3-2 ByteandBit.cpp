#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int a         = 11;
	long int  b   = 12;
	char c        = 'A';
	bool d        = 1;
	float e       = 1.1;
	double f      = 1.2;
	long double g = 1.3;
	int WaitForShutdown;

	cout << "int : " << sizeof(a) << "byte " << 8*sizeof(a) << " bit\n";
	cout << "long int : " << sizeof(b) << "byte " << 8*sizeof(b) << " bit\n";
	cout << "char : " << sizeof(c) << "byte " << 8*sizeof(c) << " bit\n";
	cout << "bool : " << sizeof(d) << "bytd " << 8*sizeof(d) << " bit\n";
	cout << "float : " << sizeof(e) << "byte " << 8*sizeof(e) << " bit\n";
	cout << "double : " << sizeof(f) << "byte " << 8*sizeof(f) << " bit\n";
	cout << "long double : " << sizeof(g) << "byte " << 8*sizeof(g) << " bit\n";
	//cout << "int : " << sizeof(a) << "byte " << 8*sizeof(a) << " bit\n";
	cin >> WaitForShutdown;
	return 0;
}