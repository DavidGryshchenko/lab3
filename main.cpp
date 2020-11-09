#include "stdafx.h"
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

using namespace std;
Розкласти в ланцюговий дріб введене користувачем дійсне число
* /
const int n = 50;

int _tmain(int argc, _TCHAR* argv[])
{
	int H[n], Z[n], V[n];

	setlocale(LC_ALL, "Russian");

	printf("числитель:\n");
	scanf("%d", &(H[0]));
	printf("знаменатель:\n");
	scanf("%d", &(Z[0]));
	printf(" [ ");

	for (int i = 0; i < n; i++)
	{
		if (Z[i] == 0) { printf("] \n"); break; }
		else
		{
			V[i] = H[i] / Z[i];

			printf("%d ", V[i]);
			Z[i + 1] = H[i] - Z[i] * V[i];
			H[i + 1] = Z[i];
		}
	}


	system("pause");
	exit(0);
	_getch();

	return 0;
}

Дано функцію 𝑓(𝑥).Визначити, чи є вона періодичною, якщо так – визначити період.
* /
const float pi = 3.1415;

float func(float x) {
	return (pow(-1, x));
	//return (pow(x,2));
	  //return (cos(x));
	 //return (cos(x)/sin(x));


}

void task_16_1() {
	float endP = 20 * pi;
	for (float x = 1; x <= (endP); x++) {
		float per;
		for (per = pi; per <= (endP); per = per + pi) {
			if ((int)(func(x) * 1000) == (int)(func(x + per) * 1000)) {
				cout << "Перiод функцii : " << per << endl;
				break;
			}

		}
		if (per <= (endP + pi)) {
			break;
		}
		else if (per >= (endP)) cout << "Функцiя не перiодична" << endl;
	}

}

void task_16_2() {
	float endP = 100;
	for (float x = 1; x <= (endP); x++) {
		float per;
		for (per = 1; per <= endP; per++) {
			if ((int)(func(x)) == (int)(func(x + per))) {
				cout << "Перiод функцii : " << per << endl;
				break;
			}
		}
		if (per < endP) break;
		else if (per >= (endP)) {
			cout << "Функцiя не перiодична" << endl;
			break;

		}
	}

}


int main() {
	//task_16_2();
	//task_16_1();
	task_11();

	return 0;
}
