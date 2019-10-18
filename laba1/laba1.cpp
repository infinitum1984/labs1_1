#include <iostream>
#include <math.h>
using namespace std;
//test commit
	int main()
	{
		double m, c, x, b;
		int test=0;
		cout << "m: ";
		cin >> m;

		cout << "c: ";
		cin >> c;

		cout << "x: ";
		cin >> x;

		cout << "b: ";
		cin >> b;

		double fi = sqrt(m * tan(x) + abs(c * sin(x)));
		double eps = m * cos(b * x + sin(x)) + (c * c * c);

		cout << "fi: " << fi << "\n";
		cout << "eps: " << eps << "\n";
		return 0;
	}

