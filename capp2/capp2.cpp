#include <conio.h>
#include "windows.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void res(int a) {
	if (a >= 18 && a <= 40) {
		cout << "ФУУУУ ТИ СТАРЫЙ";
	}
	else if (a >= 70) {
		cout << "Поздравляем! Вы прошли игру!";
	}
	else {
		cout << "Вы в самом расцвете сил.";
	}
}
 
void ending(int a) {
	if (a % 100 >= 11 && a % 100 <= 14) {
		cout << "Ваш возраст " << a << " лет." << endl;
	}
	else {
		if (a % 10 >= 2 && a % 10 <= 4) {
			cout << "Ваш возраст " << a << " года." << endl;
		}
		else if (a % 10 == 1) {
			cout << "Ваш возраст " << a << " год." << endl;
		}
		else {
			cout << "Ваш возраст " << a << " лет." << endl;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int b,a;
	srand(time(NULL));
	b = rand() % 3 + 1;
	cout << "Возростосчётчик [enterprise edition] загрузка...";
	Sleep(16000);
	system("cls");
	cout << "Возростосчётчик [enterprise edition] v1.3" << endl;
	cout << "Сколько вам полных лет? - ";
	cin >> a;
	cout << "wait." << endl;
	Sleep(2000);
	cout << "wait.." << endl;
	Sleep(2000);
	cout << "wait..." << endl;
	Sleep(13000);
	system("cls");
	if (b == 2) {
		cout << "\x1b[31mFatal error ocurred. Do not kill the process at any time!\x1b[0m" << endl;
		cout << endl << "RECOUNT IN 6 SECONDS" << endl;;
		Sleep(6000);
		system("cls");
		cout << "Возростосчётчик [enterprise edition] v1.3 \x1b[41m<SAFE BOOT>\x1b[0m" << endl;
		Sleep(3000);
		cout << "wait." << endl;
		Sleep(2000);
		cout << "wait.." << endl;
		Sleep(2000);
		cout << "wait..." << endl;
		Sleep(1000);
		ending(a);
		res(a);
	}
	else {
		Sleep(2000);
		ending(a);
		res(a);
	}
	Sleep(12000);
	return 0;
}