// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	unsigned r1, r2, r3;
	cout << "Enter r1" << endl;
	cin >> r1;
	cout << "Enter r2" << endl;
	cin >> r2;
	cout << "Enter r3" << endl;
	cin >> r3;

	 if (r2+r3<=r1)
	 {
		 cout << "YES" << endl;
	 }
	 else 
	 {
		 cout << "NO" << endl;
	 }
	 system("pause");
	return 0;
}
