﻿// лаба2задание1вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	double x1, x2, y1, y2, a; //объявление переменных
	cout << "Введите значения координат";
	cin >> x1 >> y1 >> x2 >> y2; //присваивание значений координатам
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); //рассчет 
	cout << "a=" << a; //вывод на экран искомого значения 
	return 0;

}
