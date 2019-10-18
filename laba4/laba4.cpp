// laba4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
const int n = 4;

int mas[n][n];
int main()
{
    
	

	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n; j++) {
			cin >> *(*(mas + i) + j);				
		}
		cout << "\n end line"<<endl;
	}

	for (int j = 0; j < n;j++) {
		for (int i = 0; i < n; i++) {
			cout << "\n" << i << " " << j;

			if (*(*(mas + i) + j)==0) {
				break;
			}
		}
	}
	

	
}
int get_sum(int num_str) {
	int sum = 0;
	for (int i = 0;i < n;i++) {
		int* ptrtemp = &*((*mas + num_str) + i);
			if ((abs(*ptrtemp) == *ptrtemp)&& ( *ptrtemp % 2 == 0)) {
				sum += *ptrtemp;
			
			}
	}
	return sum;
}

