
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double mas[10] = { -1,2,0,6,5,6,5.5,1,5,-44 };
	double c;
	cout << "C:";
	cin >> c;

	int num = 0;
	int index_max = 0;
	for (int i = 0; i < size(mas); i++)
	{
		if (mas[i] > c) {
			num++;
		}
		if (abs(mas[i]) > abs(mas[index_max])) {
			index_max = i;
		}
	}
	cout << "num > C: " << num << endl;
	cout << index_max << endl;
	double multi = 1;
	for (int i = index_max; i < size(mas); i++)
	{
		multi = multi * mas[i];
	}
	cout << "multi: " << multi << endl;

	double mas_revers[size(mas)];

	int num_pos = 0;
	int num_neg = 0;
	for (int i = 0; i < size(mas); i++)
	{
		if (mas[i] == abs(mas[i]))
		{
			mas_revers[size(mas) - 1 - num_pos] = mas[i];
			num_pos++;
		}
		else
		{
			mas_revers[num_neg] = mas[i];
			num_neg++;
		}
	}

	for (int i = 0; i < size(mas_revers); i++)
	{
		cout << mas_revers[i] << " ";
	}
	return 0;

}
