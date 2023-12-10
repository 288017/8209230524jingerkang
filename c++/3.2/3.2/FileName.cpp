#include <iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num);
int main()
{
	bool is_prime(int num);
	int num;
	cin >> num;
	if (is_prime(num) == 0)
		cout << "false" << endl;
	else cout << "true" << endl;
	const int NUMBER_OF_PRIMES = 200;
	const int LINE = 10;
	int count = 0;
	int number = 2;
	while (count < NUMBER_OF_PRIMES)
	{
		if (is_prime(number))
		{
			count++;
			if (count % LINE == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}

	return 0;
}
bool is_prime(int num)
{
	int i;
	for (i = 2; i <= num; i++) 
		if (num % i == 0)
			return 0;
		return 1;
}

