#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	
	double x = 2.5;
	double a = 1.1;
	//Ставить меньшие начальные значения не имеет смысла
	//так как при них функция не имеет решений
	
	const double hx = 0.5;
	const double ha = 0.2;

	int inc = 0;
	while (x <= 4)
	{	
		++inc;
		double z = (sqrt(x - 1.5) + pow(x, a)) / (pow(x - 2.0, 1.0 / 3.0));
		cout << "Z_"<<inc<<"= " << z <<endl;

		a = a + ha;
		x = x + hx;
		

	}

}

