#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int z;
	do
	{
		cout << "Kakoe zadanie?";
		cin >> z;
		switch (z)
		{
		case 1:
		{
			//1.	Дан квадратный массив из n элементов.Найти произведение элементов первой строки
			int m[4][4] = { { 0 },{ 0 } }, pr = 1;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = 1 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i<4;i++)
			{
				for (int j = 0; j < 4; j++)
				{
					pr *= m[0][j];
				}
			}
			cout << pr << endl;
		}
		break;

		case 2:
		{
			//2.	Дана целочисленная квадратная матрица.Написать программу упорядочения ее строк по возрастанию сумм их элементов
			int m[4][4] = { { 0 },{ 0 } }, temp, min = 0, sum = 0, n[4];
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = 1 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += m[i][j];
				}
				n[i] = sum;
			}
			for (int i = 0; i < 4; i++)
			{
				cout << n[i] << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				min = i;
				for (int j = i + 1; j < 4; j++)
				{
					if (n[j] < n[min])
						min = j;
				}
				temp = n[i];
				n[i] = n[min];
				n[min] = temp;
			}
			for (int i = 0; i < 4; i++)
			{
				cout << n[i] << endl;
			}
			
		}
		break;

		case 3:
		{
			//3.	Дана целочисленная матрица размера 5×10.Найти минимальное значение среди сумм элементов всех ее строк
			int m[5][10] = { { 0 },{ 0 } }, temp, min = 0, sum = 0, n[5];
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					m[i][j] = 1 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				sum = 0;
				for (int j = 0; j < 10; j++)
				{
					sum += m[i][j];
				}
				n[i] = sum;
			}
			for (int i = 0; i < 5; i++)
			{
				cout << n[i] << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = i + 1; j < 5; j++)
				{
					if (n[j] < n[min])
						min = j;
				}
			}
			cout << "-----------" << endl;
			cout << n[min] << endl;
			

		}
		break;

		case 4:
		{
			//4.	В произвольной матрице - отсортировать по убыванию элементы последовательности, расположенные после второго отрицательного числа.
			int m[5][10] = { { 0 },{ 0 } }, count = 0, min = 0, temp, r, v;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					m[i][j] = -15 + rand() % 50;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (m[i][j] < 0)
					{
						r = m[i][j];
						count++;
						if (count == 2)
						{
							for (int i = r; i < 5 ; i++)
							{
								min = i;
					for (int j = i + 1; j< 10; j++)
								{
									if (m[i][j] < m[min][min])
										min = j;
								}
								temp = m[i][j];
								m[i][j] = m[min][min];
								m[min][min] = temp;
							}


						}
					}
					 
				}
			}
			cout << "----------------" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;

		case 5:
		{
			//5.	Дан массив A(n, m).Удалить строки массива, не имеющие ни одного повторяющегося элемента
			int m[5][10] = { { 0 },{ 0 } }, count = 0, del;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					m[i][j] = 1 + rand() % 50;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					int hh = 0;
						hh = m[i][j];
						count = 0;
						for (int b = 0; b < 5; b++)
						{
							for (int v = 0; v < 10; v++)
							{
								if (m[i][j] == m[b][v])
								{
									count++;
								}
								if (count ==0)
					    	{
								m[i][j] = 0;
						    }
							}
						}	
					}
				}
			
			cout << "----------------------------------------" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;

		case 6:
		{
			//6.	Элементы матрицы A сделать с помощью генератора случайных чисел.Сделать новую матрицу B, в которой удалить с матрицы А ряд, в котором минимальный элемент среди элементов главной диагонали
			int m[4][4];
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = 1 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}


		}
		break;

		}
	} while (z <= 0);

	system("pause");

}