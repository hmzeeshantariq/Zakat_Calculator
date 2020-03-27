#include "zakatCow.h"

CowZakat::CowZakat() : Zakat()
{
	setOYCow(0);//0
	setTYCow(0);//39
}
/////////////
//setters
void CowZakat::setOYCow(int cow)
{
	tOneYear = cow;
}
void CowZakat::setTYCow(int cow)
{
	tTwoYear = cow;
}
///////////
//getters
int CowZakat::getOYCow() const
{
	return tOneYear;
}
int CowZakat::getTYCow() const
{
	return tTwoYear;
}
void CowZakat::calculateZakat()
{
	int sum = tOneYear + tTwoYear;
	int remThirty = sum % 30, remForty = sum % 40;
	if (sum % 30 == 0)
	{
		numOYCow = sum / 30;
		numTYCow = 0;
	}
	else if (sum % 40 == 0)
	{
		numOYCow = 0;
		numTYCow = sum / 40;
	}
	else if(tOneYear == 0)
	{
		numOYCow = 0;
		numTYCow = tTwoYear / 40;
	}
	else if (tTwoYear == 0)
	{
		numTYCow = 0;
		numOYCow = tOneYear / 30;
	}
	else if (remForty < remThirty)
	{
		while (sum >= 40)
		{
			sum = sum - 40;
			numTYCow++;
			if (sum - 30 >= 0)
			{
				sum = sum - 30;
				numOYCow++;
			}
		}
	}
	else
	{
		while (sum >= 30)
		{
			sum = sum - 30;
			numOYCow++;
			if (sum - 40 >= 0)
			{
				sum = sum - 40;
				numTYCow++;
			}
		}
	}

	if (numOYCow > tOneYear)
	{
		numOYCow = tOneYear;
	}
	if (numTYCow > tTwoYear)
	{
		numTYCow = tTwoYear;
	}
}
void CowZakat::display() const
{
	cout << "\n\nTotal number of cows owned: " << (tOneYear + tTwoYear)
		<< "\nNumber of one year cows need to given in zakat: " << numOYCow
		<< "\nNumber of two year cows need to given in zakat: " << numTYCow << endl;
}