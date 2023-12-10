#include <iostream>
#include <cmath>
#include "mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3);
double double_area(double side1, double side2, double side3);

int main()
{
	double side1, side2, side3;
	cout << "输入三边长: " << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "面积为：" << double_area(side1, side2, side3) << endl;
	else
		cout << "构不成三角形" << endl;

	return 0;

}

