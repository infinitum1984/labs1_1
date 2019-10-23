#include <iostream>
#include <math.h>
using namespace std;
<<<<<<< HEAD

	int main()
	{
		double m, c, x, b;
		
=======
	int main()
	{
		double m, c, x, b;
>>>>>>> ebc5bbc15fc1bce68f8e2d0e6c7c7d4b031ea16a
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

