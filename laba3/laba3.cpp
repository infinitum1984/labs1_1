
#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;
	
void trans_mas(double elements[], int mas_size) {
	double* out_mas = new double[mas_size];
	int minus_index = 0;
	int plus_index = mas_size - 1;
	for (int i = 0;i < mas_size;i++) {
		if (abs(elements[i]) != elements[i]) {
			out_mas[minus_index] = elements[i];
			++minus_index;
		}
		else {
			out_mas[plus_index] = elements[i];
			--plus_index;
		}
	}
	for (int i = 0;i < mas_size;i++) {
		elements[i] = out_mas[i];
	}

}
void sort_mas(double elements[], int mas_size) {
	for (int i = 0;i < mas_size;i++) {
		for (int j = 0;j < mas_size - 1;j++) {
			if (elements[j] > elements[j+1]) {
				double swap = elements[j];
				elements[j] = elements[j + 1];
				elements[j + 1] = swap;
			}
		}
	}
}

	int get_num_more_c(double c, double elements[], int mas_size) {
		int num = 0;
		for (int i = 0;i < mas_size;i++) {

			if (elements[i] > c) {
				++num;
			}
		}
		return num;
	}

	double get_multi_elemets(double elements[], int mas_size) {
		double max_element = abs(elements[0]);
		int index_max = 0;
		for (size_t i = 1; i < mas_size; i++)
		{

			if (abs(elements[i])>max_element)
			{
				max_element = abs(elements[i]);
				index_max = i;
			}
		}
		
		if (index_max==mas_size-1)
		{
			return 0;
		}
		double multi = 1.0;
		for (int i = index_max + 1;i < mas_size;i++) {
			multi = multi * elements[i];
		}
		return multi;
	
	}
	
	int main()
	{
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);
		int num_elements;
		double C;
		cout << "Введите C: ";
		cin >> C;
		cout << "Введите количество элементов: ";
		cin >> num_elements;
		cout << "Введите элементы: ";
		double* p_mas = new double[num_elements];
		for (int i = 0; i < num_elements; i++)
		{
			cin >> p_mas[i];

		}
		cout << endl;
		cout << "Количество элементво больше C: " << get_num_more_c(C, p_mas, num_elements) << endl;
		cout << "Произведение элементов: " << get_multi_elemets(p_mas, num_elements) << endl;		
		cout << "Преобразованый массив: ";
		trans_mas(p_mas, num_elements);
		//sort_mas(p_mas, num_elements);
		for (int i = 0;i < num_elements;i++) {
			cout << p_mas[i] << " ";		}
		cout << endl;

		delete[] p_mas;


	}




