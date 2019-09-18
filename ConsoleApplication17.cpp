#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int A, B, C, AC, BC, Sum;
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
	cout << "Enter C" << endl;
	cin >> C;
	AC = abs(A - C);
	BC = abs(B - C);
	Sum = AC + BC;
	cout << "AC=" << AC << endl;
	cout << "BC=" << BC << endl;
	cout << "Sum" << Sum << endl;
	system("pause");
	return 0;
}
