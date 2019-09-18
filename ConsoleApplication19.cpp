#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float A, B, C, AC, BC, M;
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
	cout << "Enter C" << endl;
	cin >> C;
	AC = fabs(A - C);
	BC = fabs(B - C);
	M = AC * BC;
	cout << "AC=" << AC << endl;
	cout << "BC=" << BC << endl;
	cout << "M=" << M;
	system("return");
	return 0;
}
