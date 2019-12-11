// laba4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <time.h>
#include <vector>
using namespace std;

int main() {
	int num_elements;
		
		cout << "Введите количество элементов: ";
		cin >> num_elements;
		cout << "Введите массив: ";
		double* p_mas = new double[num_elements];
		for (int i = 0; i < num_elements; i++)
		{
			cin >> p_mas[i];

		}
		vector<double> out_array;
		for (int i = 0; i <num_elements; i++)
		{
			int num_of_in=0;
			for (int j = 0; j < num_elements; j++)
			{
					if (p_mas[i]==p_mas[j])
					{
						num_of_in++;
						/* code */
					}
					
						
				
				/* code */
			}
			if (num_of_in<=2)
			{
				out_array.push_back(p_mas[i]);
				/* code */
			}		
			
			/* code */
		}
		cout << endl;
		cout << "Выходной массив: ";

		for (auto i = out_array.begin(); i !=out_array.end(); ++i)
		{
			cout<<*i<<" ";			/* code */
		}
		cout << endl;

		

		delete[] p_mas;
}
