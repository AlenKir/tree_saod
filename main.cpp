#include <iostream>
using namespace std;

//������� ����� ������� <= ��������, � ������ ������� >

#define N 10

struct Tree {
	int key;
	Tree *left;
	Tree *right;
	int height;
}

int main()
{
	while (true) {
	cout << "What do you want to do?" << endl;
	cout << "1 - fill with random values" << endl;
	cout << "2 - add an element" << endl;
	cout << "3 - find an element" << endl;
	cout << "4 - delete an element" << endl;
	cout << "5 - calculate" << endl;
	cout << "0 - exit" << endl;

	int x; cin >> x;

	if (x == 1)
	{
		//��������� ��������
	}
	if (x == 2)
	{
		//��������� �������� � ���������������� ������ ������

	}
	if (x == 3)
	{
		//������ �������� � ������ ������ � ������� ���������� �����, �� ������� �������������� �����
	}
	if (x == 4)
	{
		//������� �������� �� ����������������� ������ ������
	}
	if (x == 5)
	{
		//���������� ������� �������������� �������� ���� ������ ������.  ������� ������ ������������
	}
	if (x == 6)
		break;
}
	system("pause");
	return 0;
}