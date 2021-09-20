//Catherine Stringfellow
//This code changes a bit (does not toggle it)

#include <iostream>
using namespace std;

int main()
{
	int value = 54;      //110110 in binary
	int bitValue = 1;
	int pos = 3;

	int mask = 1 << pos;   //
	value = value & ~mask | ((bitValue << pos) & mask);

	cout << value << endl;      //111110 == 62 base 10

	system("pause");
	return 0;
}