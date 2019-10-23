#include <iostream>
#include <math.h>
using namespace std;

	int main()
	{
		double m=2;

		double c=-1;
		double x=1.2;
		double b=0.7;
				
		double fi = sqrt(m * tan(x) + abs(c * sin(x)));
		double eps = m * cos(b * x + sin(x)) + (c * c * c);

		cout << "A: " << fi << "\n";
		cout << "K: " << eps << "\n";
		return 0;
	}

