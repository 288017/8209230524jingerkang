#include <iostream>
using namespace std;
void order(int p[], int size);

int main()
{
	int size, b;
	cin >> size;
	int* a = new int[size];
	for (int i = 0; i < size; i++)
	{
	cin >> *(a + i);
    }
	cout << "动态调试" << endl << "请输入你想要输出的数组" << endl;
	cin >> b;
	cout << "p[" << b - 1 << "] = " << *(a + b - 1) << endl;
	order(a, size);
	for (int m = 0; m < size; m++)
	{
		cout << *(a + m) << " ";
		cout << endl;
	}
	delete a;
	return 0;
}
void order(int p[],int size)
{
	int t;
	for (int i = 0; i < size; i++)
	{
		for (int n = 0; n < size - 1; n++)
		{

			if (*(p + n) > *(p + n + 1))
			{
				t = *(p + n);
				*(p + n) = *(p + n + 1);
				*(p + n + 1) = t;
			}
		}
	}
}