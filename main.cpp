#include <iostream>
using namespace std;

//сделать левую вершину <= например, а правую вершину >

#define N 10

struct Tree {
	int key;
	Tree *left;
	Tree *right;
	int height;
};

int random(int *mas)
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
	return mas;
}

int main()
{
	Tree *root = new Tree;
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
		mas = random(mas);
		for (int i = 0; i < N; i++)
			cout << mas[i] << " " ;
		cout << endl;

		for
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