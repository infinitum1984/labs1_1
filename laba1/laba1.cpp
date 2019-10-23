#include <iostream>
#include <math.h>
using namespace std;

	int main()
	{
		double m=2;
		double c=-1;
		double x=1.2;
		double b=0.7;
				
		double A = sqrt(m * tan(x) + abs(c * sin(x)));
		double K = m * cos(b * x + sin(x)) + (c * c * c);

		cout << "A: " << A << "\n";
		cout << "K: " << K << "\n";
		return 0;
	}

