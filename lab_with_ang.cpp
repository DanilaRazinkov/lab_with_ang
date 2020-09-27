#include <iostream>
#include <clocale>
#include "Angle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char exit;
	do
	{
		int grad, minute;
		cout << "Введите значения угла 1: ";
		cin >> grad >> minute;
		Angle ang1(grad, minute);

		cout << "Введите значения угла 2: ";
		cin >> grad >> minute;
		Angle ang2(grad, minute);
		cout << "Значение угла 1: ";
		cout << ang1.toString() << endl;

		cout << "Значение угла 2: ";
		cout << ang2.toString() << endl;

		cout << "Введите на сколько увеличить угол 1: ";
		cin >> grad >> minute;
		ang1.add(grad, minute);
		cout << "Новое значение угла 1 : ";
		cout << ang1.toString() << endl;

		cout << "Введите на сколько уменьшить угол 1: ";
		cin >> grad >> minute;
		ang1.minus(grad, minute);
		cout << "Новое значение угла 1 : ";
		cout << ang1.toString() << endl;

		cout << "Сравниваем угол 1 с улом 2(1 больше, -1 меньше, 0 равны): ";
		cout << ang1.compareTo(ang2) << endl;

		cout << "Синус угла 1: ";
		cout << ang1.m_sin() << endl;

		cout << "Приводим к промежутку 0-360: ";
		ang1.in0_360();
		cout << ang1.toString() << endl;

		cout << "Для выхода введите e: ";
		cin >> exit;

	} while (exit != 'e');
}