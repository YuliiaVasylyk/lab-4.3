// Lab_04_3.cpp
// <Василик Юлія>
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;


	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + 5 < 0 && c == 0)
			F = 1 / (a * x) - b;
		else
			if (x + 5 > 0 && c != 0)
				F = (x - a) / x;
			else
				F = (10 * x) / (c - 4);


		cout << "|" << setw(9) << setprecision(1) << x
			<< " |" << setw(9) << setprecision(4) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
