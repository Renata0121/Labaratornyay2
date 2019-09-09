// лаба2задание5вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float x1, y1, x2, y2, x3, y3, p, per, ab, bc, ac, s; //объявление переменных
	cout << "Введите координаты";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; //присваивание переменным значения
	ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); //расчеты
	ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	bc = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	p = ab + bc + ac;
	per = p / 2;
	s = sqrt(p * (p - ab) * (p - bc) * (p - ac));
	cout << "per=" << per;  //вывод на экран значения периметра 
	cout << "s=" << s;  //выод на экран значения площади
	return 0;
}