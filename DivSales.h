#include <iostream>

using namespace std;

class DivSales
{
private:
	static float salesTotal;
public:
	DivSales()
	{
		for (int i = 0; i < 4; i++) {
			quarterSales[i] = 0;
		}
		salesTotal = 0;
	}

	float quarterSales[4];

	void setSales(float Q0, float Q1, float Q2, float Q3)
	{
		quarterSales[0] = Q0;
		quarterSales[1] = Q1;
		quarterSales[2] = Q2;
		quarterSales[3] = Q3;

		for (int i = 0; i < 4; i++)
			salesTotal += Q0 + Q1 + Q2 + Q3;
	}

	float sales(int quarter)
	{
		return quarterSales[quarter];
	}

	static float getSalesTotal()
	{
		return salesTotal;
	}
};