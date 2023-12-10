#include <iostream>
#include <cmath>
bool is_valid(double side1, double side2, double side3)
{
	if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
		return true;

}

double double_area(double side1, double side2, double side3)
{
	double s, area;
	s = (side1 + side2 + side3) / 2.0;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;

}







