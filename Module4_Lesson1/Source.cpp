#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int n = 12, a;

		for (int i = 0; i < n; i++)
		{
			cout << i+1 << endl;
		}
		cin >> a;
	}
	break;
	case 2:
	{
		int n = 10;
		while (n > 0)
		{
			cout << n-- << endl;
		}

		do
		{
			cout << n++ << endl;
		} while (n < 10);
		cin >> n;
	}
	break;
	case 3:
	{
		int n = rand() % 20;
		int popytka = 0;
		cout << "Ia zagadal chislo!" << endl;
		bool ugadal = false;
		int userNumber;
		do
		{
			cout << "popytka N" << ++popytka << endl;
			cout << "Vvedi svoe:";
			cin >> userNumber;
			if (n == userNumber)
				ugadal = true;
		} while (!ugadal);
		cout << "Vy ugadali chislo";
	}
	break;
	case 4:
	{
		int n = 100;
		for (int i = 0; i < n; i++)
		{
			if (i == 77)
				continue;
			cout << i;
		}
	}
	break;
	case 5:
	{
		int n = 30;
		int popytka = 0;
		cout << "Ia zagadal chislo!" << endl;
		bool ugadal = false;
		int userNumber;
		do
		{
			cout << "popytka N" << ++popytka << endl;
			cout << "Vvedi svoe:";
			cin >> userNumber;
			if (n == userNumber)
			{
				ugadal = true;
				cout << "Vy ugadali chislo" << endl;
				break;
			}
			if (popytka == 3 && ugadal == false)
			{
				cout << "Vy ne ugadali" << endl;
				break;
			}
		} while (!ugadal);
		
	}
	break;
	case 6:
	{
		int n = 30;
		cout << "Ia zagadal chislo!" << endl;
		int userNumber;
		
		for (int i = 0; i < 3; i++)
		{
			cout << "Vvedi svoe:";
			cin >> userNumber;
			if (n == userNumber)
			{
				cout << "Vy ugadali chislo" << endl;
				break;
			}
			else cout << "Vy ne ugadali" << endl;
		}
	}
	break;
	case 7:
	{
		int n = 30;
		int popytka = 1;
		cout << "Ia zagadal chislo!" << endl;
		int userNumber=0;
		while (popytka < 4)
		{
			cout << "popytka N" << ++popytka << endl;
			cout << "Vvedi svoe:";
			cin >> userNumber;
			if (n == userNumber)
			{
				cout << "Vy ugadali chislo" << endl;
				break;
			}
			else cout << "Vy ne ugadali" << endl;
		}
	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}