﻿// лаба2задание3вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, c, p; //объявление переменных
	cout << "Введите значения координат";
	cin >> a >> b >> c; //присваивание зачений переменных
	p= abs(c - a) * abs(c - b);  //рассчет произведения длин отрезков
	cout << "p=" << p; //вывод произведения длин отрезков
	return 0;
}
