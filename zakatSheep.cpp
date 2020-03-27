#include "zakatSheep.h"

SheepZakat::SheepZakat() : Zakat()
{
	tNum = 0;
}
void SheepZakat::calculateZakat()
{
	if (getSheep() < 40)
	{
		Zakat::setNumSheep(0);
	}
	else if (getSheep() < 121)
	{
		Zakat::setNumSheep(1);
	}
	else if (getSheep() < 201)
	{
		Zakat::setNumSheep(2);
	}
	else if (getSheep() < 400)
	{
		Zakat::setNumSheep(3);
	}
	else
	{
		Zakat::setNumSheep(getSheep() / 100);
	}
}
//////////////
//setter
void SheepZakat::setSheep(int s)
{
	tNum = s;
}
//////////
//getter
int SheepZakat::getSheep() const
{
	return tNum;
}
void SheepZakat::display() const
{
	cout << "\nTotal number of Sheeps owned: " << getSheep() << endl;
	cout << "Number of Sheeps need to given in Zakat: " << Zakat::getNumSheep() << endl;
}