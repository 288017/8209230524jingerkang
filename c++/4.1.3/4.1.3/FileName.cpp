#include <iostream>
using namespace std;

int main() {
	const int size = 100;
	bool locker[size];
	for (int i = 0; i < size; i++)
	{
		locker[i] = false;
	}
	for (int j = 0; j < size; j++)
	{
		for (int k = j; k < size; k += j + 1)
		{
			if (locker[k])
				locker[k] = false;
			else
				locker[k] = true;
		}
	}
	cout << "开着的柜子有：";
	for (int m = 0; m < size; m++)
	{
		if (locker[m])
			cout  << m + 1 << "  ";
	}
	cout << endl;

}