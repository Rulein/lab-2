// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2, a, b, p, s;
	cout << "Enter x1, x2, y1, y2" << endl;
	cin >> x1 >> x2 >> y1 >> y2;
	a = fabs(x1 - x2);
	b = fabs(y1 - y2);
	p = (a + b) * 2;
	s = a * b;
	cout << "p=" << p << endl;
	cout << "s=" << s << endl;
	return 0;
}
