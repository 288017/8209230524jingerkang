#include <iostream>
using namespace std;

int parseHex(const char* const hexString)
{
	int a, sum = 0;
	a = strlen(hexString);
	int *list=new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = (static_cast<int>(hexString[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		sum = sum + list[i];
	}
	return sum;
}
int main()
{
	int size = 999;
	char* list = new char[size];
	cout << "Please enter a number in hexChar : \n";
	cin.getline(list, size);
	cout << "Tne number " << list << " in hexChar is " << parseHex(list) << " in decimal\n";
}