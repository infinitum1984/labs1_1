#include <Windows.h>
#include <iostream>
using namespace std;

struct Item
{
	string date;
	string code;
	int num;
};
void print_item(Item item) {
	cout << "��� ��������: " << item.code << "\n";
	cout << "����: " << item.date << "\n";
	cout << "����������: " << item.num << "\n";
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int num_items;

	cout << "���������� ���������: ";
	cin >> num_items;

	Item* items = new Item[num_items];
	for (int i = 0;i < num_items;i++) {
		cout << "������� ��� �������� " << i + 1 << ": ";
		cin >> items[i].code;
		cout << "������� ���� �������� " << i + 1 << ": ";
		cin >> items[i].date;
		cout << "������� ���������� �������� " << i + 1 << ": ";
		cin >> items[i].num;
		cout << "\n";
	}
	Item more_item = items[0];
	for (int i = 1;i < num_items;++i) {
		if (items[i].num > more_item.num) {
			more_item = items[i];
		}
	}
	cout << "���� ����� ��������� �������: " << "\n";
	print_item(more_item);

}
