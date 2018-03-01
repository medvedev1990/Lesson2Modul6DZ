#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
#include<stdarg.h>
#include"Header.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	cout.setf(ios::boolalpha);
	cout.precision(5);
	int n, exit;
	do
	{
		cout << "enter number exemple: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			/*1.Описать функцию IsPowerN(K, N) логического типа, возвращающую True, если целый параметр K (> 0) является степенью числа N (> 1), и False
			в противном случае. Дано число N (> 1) и набор из 10 целых положительных чисел.
			С помощью функции IsPowerN найти количество степеней числа N в данном наборе.*/
			float K, N;
			cout << "введите число: ";
			cin >> K;
			cout << endl;
			cout << "введите степень: ";
			cin >> N;
			cout << endl;
			cout << IsPowerN(&K, &N) << endl;
		}
		break;
		case 2:
		{
			/*2.Описать функцию IsPrime(N) логического типа, возвращающую True, если целый параметр N (> 1) является простым числом, и False в противном случае
			(число, большее 1, называется простым, если оно не имеет положительных делителей, кроме 1 и самого себя).
			Дан набор из 10 целых чисел, больших 1. С помощью функции IsPrime найти количество простых чисел в данном наборе.*/
			int N[10];
			int i;
			ZapolnenieMassiva(N, 10);
			IsPrime(N, 10);
		}
		break;
		case 3:
		{
			/*3.Описать функцию DigitN(K, N) целого типа, возвращающую N-ю цифру целого положительного числа K (цифры в числе нумеруются справа на- лево).
			Если количество цифр в числе K меньше N, то функция возвращает –1.
			Для каждого из пяти данных целых положительных чисел K1, K2, …, K5 вызвать функцию DigitN с параметром N, изменяющимся от 1 до 5.*/
			int N, a;
			for (int i = 0;i < 5;i++)
			{
				cout << "введите порядковы номер цифры (цифры нумеруются с права на лево): ";
				cin >> N;
				cout << endl;
				a = DigitN(&N);
				cout << a << endl;
			}
		}
		break;
		case 4:
		{
			/*4.Описать функцию DegToRad(D) вещественного типа, находящую величину угла в радианах,
			если дана его величина D в градусах (D — вещественное число, 0 < D < 360). Воспользоваться следующим соотношением: 180° = π радианов.
			В качестве значения π использовать 3.14. С помощью функции DegToRad перевести из градусов в радианы пять данных углов.*/
			float gradusov;
			cout << "введите градусы: ";
			cin >> gradusov;
			cout << endl;
			cout << DegToRad(&gradusov) << endl;

		}
		break;
		case 5:
		{
			/*5.писать функцию RadToDeg(R) вещественного типа, находящую вели- чину угла в градусах,
			если дана его величина R в радианах (R — вещественное число, 0 < R < 2·π). Воспользоваться следующим соотношением: 180° = π радианов. В качестве значения π использовать 3.14.
			С помощью функции RadToDeg перевести из радианов в градусы пять данных углов*/
			float gradusov;
			cout << "введите колличество радианов: ";
			cin >> gradusov;
			cout << endl;
			cout<<RadToDeg(&gradusov)<<endl;
		}
		break;
		default:cout << "no exemple! Repet enter number exemple" << endl;
			break;
		}
		cout << "continue? 1-Yes 2-No: ";
		cin >> exit;
		cout << endl;

	} while (exit == 1);
}