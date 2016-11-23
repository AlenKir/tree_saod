#include <iostream>
using namespace std;

//сделать левую вершину <= например, а правую вершину >

#define N 10

struct node // структура для представления узлов дерева
	//Поле key хранит ключ узла, 
	//поле height — высоту поддерева с корнем в данном узле, 
	//поля left и right — указатели на левое и правое поддеревья. 
	//Простой конструктор создает новый узел (высоты 1) с заданным ключом k. 
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

void random(int *mas)
{
	int i = 0;
		while (i < N)
		{
			mas[i] = rand() % 10;
			bool found = false;
			for (int j = 0; j < N; j++)
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
		//заполнить рандомно
		int mas[N];
		random(mas);
		int av = 0;
		for (int i = 0; i < N; i++) {
			cout << mas[i] << " " ;
			av = av + mas[i];
	}
		av = av/N; //среднее для корня дерева
		cout << endl;
	}
	if (x == 2)
	{
		//добавлять элементы в сбалансированное дерево поиска

	}
	if (x == 3)
	{
		//искать элементы в дереве поиска с выводом количества шагов, за которое осуществляется поиск
	}
	if (x == 4)
	{
		//удалять элементы из сбалансированного дерева поиска
	}
	if (x == 5)
	{
		//подсчитать среднее арифметическое значений всех вершин дерева.  Порядок обхода симметричный
	}
	if (x == 6)
		break;
}
	system("pause");
	return 0;
}