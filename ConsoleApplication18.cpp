#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x1, x2, y1, y2, d;
	cout << "Enter x1, x2, y1, y2" << endl;
	cin >> x1 >> x2 >> y1 >> y2;
	d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	cout << "d=" << d << endl;
	system("pause");
	return 0;
}

