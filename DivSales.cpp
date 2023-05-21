#include <iostream>
#include "DivSales.h"

using namespace std;

float DivSales::salesTotal = 0;

int main()
{
	DivSales division[6] ;
	float Q0, Q1, Q2, Q3;

	for (int i = 0; i < 6; i++)
	{
		cout << "Enter the sales for 4 quarters in division " << i + 1 << " : ";
		cin >> Q0 >> Q1 >> Q2 >> Q3;
		while (Q0 <= 0 || Q1 <= 0 || Q2 <= 0 || Q3 <= 0)
		{
			cout << "The value you entered is invalid. Please try again, ensuring that it is not less than 0\n";
			cout << "Enter the sales for 4 quarters in division " << i + 1 << " : ";
			cin >> Q0 >> Q1 >> Q2 >> Q3;;
		}
		division[i].setSales(Q0, Q1, Q2, Q3);
	}

	cout << "Division\tQuarter 0\tQuarter 1\tQuarter 2\tQuarter 3\n";
	for (int i = 0; i < 6; i++)
		cout << i + 1 << "\t\t" << division[i].quarterSales[0] << "\t\t" << division[i].quarterSales[1] << "\t\t" << division[i].quarterSales[2] << "\t\t" << division[i].quarterSales[3] << endl;
	cout << "The total corporate sales for the year is " << DivSales::getSalesTotal() << endl;

	return 0;
}