#include <iostream>
#include<string>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int t;
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int j = 0; j < size2; j++)
	{
		list3[size1 + j] = list2[j];
	}
	for (int n = 0; n < (size1 + size2); n++)
	{
		for (int m = 0; m < (size1 + size2); m++)
		{
			if (list3[m] > list3[m + 1])
			{
				t = list3[m];
				list3[m] = list3[m + 1];
				list3[m + 1] = t;
			}
		}
	}
	for (int a = 0; a < (size1 + size2); a++)
		cout << list3[a] << "  ";
}
int main()
{
	int size1, size2, size3;
	cout << "Enter size1: ";
	cin >> size1;
	cout << "Enter list1: ";
	int *list1=new int[size1];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter size2: ";
	cin >> size2;
	cout << "Enter list2: ";
	int* list2=new int[size2];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int* list3=new int[size3];
	merge(list1, size1, list2, size2, list3);

	cout << endl;
	return 0;
}

