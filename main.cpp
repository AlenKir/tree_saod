#include <iostream>
using namespace std;

//������� ����� ������� <= ��������, � ������ ������� >

#define N 30

struct node // ��������� ��� ������������� ����� ������
	//���� key ������ ���� ����, 
	//���� height � ������ ��������� � ������ � ������ ����, 
	//���� left � right � ��������� �� ����� � ������ ����������. 
	//������� ����������� ������� ����� ���� (������ 1) � �������� ������ k. 
	//!!!
{
	int key;
	unsigned char height;
	node* left;
	node* right;
	node(int k) 
	{ 
		key = k; 
		left = right = 0; 
		height = 1; 
	}
};

char height(node* p)
{
	if (p)
		return p->height;
	else
		return 0;
}

int bal_factor(node* p)
{
	int factor = height(p->right) - height(p->left);
	return factor;
}

void cor_height(node* p)
{
	char hleft = height(p->left);
	char hright = height(p->right);
	if (hleft > hright)
		p->height = hleft++;
	else
		p->height = hright++;
}

void sort(int *m, int n)
{
	int j, tmp;
	for (int i = 1; i < n; i++)
	{
		tmp = m[i];
		j = i;
		while (j > 0 && m[j-1] > tmp)
		{
			m[j] = m[j-1]; 
			j--;
		}	
		m[j] = tmp;
	}
}

void random(int *mas, int n)
{
	int i = 0;
		while (i < n)
		{
			mas[i] = rand() % 50;
			bool found = false;
			for (int j = 0; j < n; j++)
			{
				if (i!=j && mas[i] == mas[j])
				{ found = true; break;} 
			}
			if (!found)
				i++;
		}
}

int main()
{
	bool isEmpty = true;

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
		int *m = new int; int n;
		cout << "Enter the amount of nodes you want to add: "; 
		cin >> n;
		m = random(m, n);
	}
		av = av/N; //������� ��� ����� ������
		cout << endl;
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