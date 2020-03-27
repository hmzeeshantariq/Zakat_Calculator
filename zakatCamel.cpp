#include "zakatCamel.h"

CamelZakat::CamelZakat() : Zakat()
{
	setTCNum(0);
	setTSNum(0);
}

//setters
void CamelZakat::setTCNum(int camel)
{
	tCNum = camel;
}
void CamelZakat::setTSNum(int sheep)
{
	tSNum = sheep;
}
//getters
int CamelZakat::getTCNum() const
{
	return tCNum;
}
int CamelZakat::getTSNum() const
{
	return tSNum;
}
void CamelZakat::calculateZakat()
{
	bool test = false;
	if (tCNum > 4 && tCNum < 25)
	{
		numCamel = 0;
		numSheep = tCNum / 5;
	}
	else
	{
		int seriesCounter = 0;
		double frac;
		for (int i = 25; i <= tCNum; i++)
		{
			frac = (i / 10.0) - i / 10;
			if (frac == 0.5)
			{
				numCamel++;
			}
			seriesCounter++;
			if (seriesCounter == 31)
			{
				i = i + 20;
				seriesCounter = 1;
			}
			if (i == tCNum)
			{
				test = true;
			}
		}
		if (!test)
		{
			numCamel = (getTCNum() / 25) + (getTCNum() / 50);
			numSheep = (getTCNum() % 50) / 5;
		}
	}
	if (numSheep > tSNum)
	{
		numSheep = tSNum;
	}
}
void CamelZakat::display() const
{
	cout << "\nTotal number of camels owned: " << tCNum << endl
		<< " Number of camels need to given in zakat: " << getNumCamel() << endl
		<< "Number of sheeps need to given in zakat: " << getNumSheep() << endl;
}
