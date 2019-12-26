#include <iostream>

#include <Windows.h>

using namespace std;

void fill_array(int** mas, int n_rows, int n_cols) {
	for (int i = 0;i < n_rows;i++) {
		mas[i] = new int[n_cols];
		for (int j = 0;j < n_cols;j++) {
			cin >> mas[i][j];
		}
		cout << "\n";
	}
}

int get_index_first_null(int** mas, int n_rows, int n_cols) {

	for (int j = 0;j < n_cols;++j) {
		for (int i = 0;i < n_rows;++i) {
			if (mas[i][j] == 0) {
				return j;
			}
		}
	}
	return -1;
}
int get_row_char(int row[], int nums) {
	int sum = 0;

	for (int i = 0;i < nums;i++) {
		if (((row[i]) % 2 == 0) && (row[i] < 0)) {
			sum = sum + row[i];
		}
	}
	return sum;
}
void transform_matrix(int** mas, int n_rows, int n_cols) {
	for (int i = 0;i < n_rows;i++) {
		for (int j = 0;j < n_rows;j++) {

			if (get_row_char(mas[i], n_cols) > get_row_char(mas[j], n_cols)) {
				int* temp = mas[j];
				mas[j] = mas[i];
				mas[i] = temp;
			}
		}
	}
}

void print_matrix(int** mas, int n_rows, int n_cols) {
	for (int i = 0;i < n_rows;i++) {

		for (int j = 0; j < n_cols;j++) {
			cout << mas[i][j] << " ";
		}
	}

}
void clear_matrix(int** mas, int n_rows) {
	for (int i = 0;i < n_rows;i++) {
		delete[] mas[i];
	}
	delete[] mas;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num_rows;
	int num_cols;

	cout << "Enter num rows: ";
	cin >> num_rows;

	cout << "Enter num cols: ";
	cin >> num_cols;

	int** matrix = new int* [num_rows];

	fill_array(matrix, num_rows, num_cols);

	int index_null_ell = get_index_first_null(matrix, num_rows, num_cols);

	if (index_null_ell == -1)
		cout << "В матрице нет нулевых элементов" << "\n";
	else
		cout << "Номер столбца с первым нулём: \t" << ++index_null_ell << "\n";


	transform_matrix(matrix, num_rows, num_cols);

	cout << "Трансформированя матрица: \n";

	print_matrix(matrix, num_rows, num_cols);

	clear_matrix(matrix, num_rows);
}


