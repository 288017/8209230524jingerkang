#include <iostream>
#include <cmath>
using namespace std;

const int a = 10;

void sd(double list[10]) {
	double t;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <  (a - 1); j++)
			if (list[j] > list[j + 1])
			{
				t= list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;

				changed = true;
			}
	} while (changed);
}

int main()
{
	double list[a];
	cout << "请输入十个数字：" << endl;
	for (int i = 0; i < a; i++)
		cin >> list[i];
	sd(list);
	cout << "顺序为：";
	for (int j = 0; j < a; j++) {
		cout << list[j];
		cout << endl;
	}
	return 0;





}