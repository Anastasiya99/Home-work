// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int L, H, W, S, B;
	cout << "L=";
	cin >> L;
	cout << "W=";
	cin >> W;
	cout << "H=";
	cin >> H;
	S = (2 * (L*H) + 2 * (H*W));
	B= S/16;
	(S % 16) ? "B = B + 1" : "B = B";
	
	cout << B << endl;
	system("pause");

	return 0;
}
