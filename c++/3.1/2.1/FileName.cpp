#include <iostream>
using namespace std;
int gys(int a, int b,int x)
{
	x = min(a, b);
	while (x > 1 && (a % x != 0 || b % x != 0))
		x--;
	return x;
}
int main()
{
	
	int c;
	int d;
	cout << "请输入两个数字：" << endl;
	cin >> c >> d;
	int t=min(c,d);
	gys(c,d,t);
	cout << "两个数字的最大公约数是：" << t << endl;
	int &f = t; 
	cout << "两个数字的最大公约数是：" << f << endl;
	int e = c * d;
	int g = e / t;
	int& i = g;
	cout << "两个数字的最小公倍数是：" << i << endl;

	return 0;

}