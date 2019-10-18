// LABA2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	const double hx = 0.5;
	const double ha = 0.2;

	double x, xmin, xmax,a;
	cout << "xmin:";
	cin >> xmin;

	cout << "xmax:";
	cin >> xmax;

	cout << "a:";
	cin >> a;


	while (x <= xmax)
	{
		double z = (sqrt(x - 1.5) + pow(x, a)) / (pow(x - 2.0, 1.0 / 3.0));
		cout << "z: " << z << endl;

		a = a + ha;
		x = x + hx;
		cout << "x" << x << endl;
	}

}

