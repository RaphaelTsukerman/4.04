// 4.04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	struct emploee
	{
		int number;
		float salary;

	};
	emploee worker1, worker2, worker3;
	cout << "input number and salary" << endl;
	cin >> worker1.number >> worker1.salary;
	cout << "input number and salary" << endl;
	cin >> worker2.number >> worker2.salary;
	cout << "input number and salary" << endl;
	cin >> worker3.number >> worker3.salary;
	cout << worker1.number << worker1.salary << worker2.number << worker2.salary << worker3.number << worker3.salary << endl;

	system("pause");
    return 0;
}

