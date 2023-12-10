#include<iostream>
using namespace std;

int indexOf(char* s1, char* s2);

int main()
{
	const int size = 999;
	char s1[size], s2[size];
	cin.getline(s1, size);
	cin.getline(s2, size);
	indexOf(s1, s2);

	return 0;
}



int indexOf(char* s1, char* s2)
{
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool *s3=new bool[a];
	for (int m = 0; m < a; m++)
		s3[m] = false;
	for (int i = 0; i < b - a + 1; i++)     
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)     
			if (s1[j] == s2[k])
			{
				index = i;
				s3[j] = true;
			}
		int h = 0;
		for (int n = 0; n < a; n++)
		{
			if (s3[n] == false && i == b - a)
			{
				return -1;
				break;
			}
			if (s3[n])
				h++;
		}
		if (h == a)
		{
			cout << index << endl;
			break;
		}
	}

}
