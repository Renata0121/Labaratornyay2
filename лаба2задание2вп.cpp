﻿// лаба2задание2вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, c, ac, bc, s; //объявление переменных;
	cout << "Введите координаты точек";
	cin >> a >> b >> c; //присваивание значения переменной
	ac = abs(c - a); //рассчет длины отрезка
	bc = abs(c - b); //рассчет длины отрезка
	s = ac + bc; //рассчет суммы отрезков
	cout << "ac=" << ac; //вывод на экран значения длины отрезка
	cout << "bc=" << bc; //вывод на экран значения длины отрезка
	cout << "s=" << s; //вывод на экран значения суммы длин отрезков
	return 0;
}


