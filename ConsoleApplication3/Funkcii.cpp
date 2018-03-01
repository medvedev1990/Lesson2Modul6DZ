#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const float pi = 3.14;

using namespace std;

void ZapolnenieMassiva(int *m,int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		m[i] = 1 + rand() % 100;
		cout << m[i]<<" - ";
	}
	cout << endl;
}
void IsPrime(int *m, int len)
{
	int i;
	int chek = 0;
	for (i = 0;i < len;i++)
	{
		chek = 0;
		for (int j = 2;j < m[i];j++)
		{
			if (m[i] % j == 0)
				chek++;
			if (chek >= 1)
				break;
		}
		bool a = (chek == 0);
		cout << m[i] << " - " << a << endl;
	}
}
int DigitN(int *N)
{
	int kolvo;
	int chislo = 5 + rand() % 99995;
	int a = chislo;
	cout << "/your random number = " << chislo << endl;
	int chek = 0;
	do
	{
		a /= 10;
		chek++;
	} while (a > 0);
	if (*N > chek)
		return -1;
	else
	{
		int i, a;
		for (i = 1;i < *N;i++)
		{
			 chislo /= 10;
			 
		}
		a = chislo % 10;
		return a;
	}
}
float DegToRad(float*D)
{
	if ((*D > 0) && (*D <= 360))
	{
		float a = (*D*pi) / 180;
		return a;
	}
}
float RadToDeg(float*D)
{
	if ((*D > 0) && (*D <= (2*pi)))
	{
		float a = (*D*180) / pi;
		return a;
	}
}
/*/*1.Описать функцию IsPowerN(K, N) логического типа, возвращающую True, если целый параметр K (> 0) является степенью числа N (> 1), и False
			в противном случае. Дано число N (> 1) и набор из 10 целых положительных чисел.
			С помощью функции IsPowerN найти количество степеней числа N в данном наборе.*/
float IsPowerN(float*K, float*N)
{
	float a = pow(*K, 1 / (*N));
	float b = a / 10;
	return b;
}