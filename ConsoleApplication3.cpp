// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int N, a;
	cout << "Enter N" << endl;
	cin >> N;

	      if (N%2 == 0)
	{
		a = N / 2;
	}

	 else if (N==1)
	{
		a = 0;
	}
	
	 else { a = N; }

	cout <<a<<endl;

	system("pause");
    return 0;
}

