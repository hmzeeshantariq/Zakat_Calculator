#include "zakat.h"

Zakat::Zakat()
{
	numSheep = numOYCow = numTYCow = numCamel = 0; 
	money = 0.0;
}
Zakat::Zakat(int val)
{
	setNumSheep(val);
	setNumOYCow(val);
	setNumTYCow(val);
	setNumCamel(val);
}
Zakat::Zakat(double rupees)
{
	numSheep = numOYCow = numTYCow = numCamel = 0;
	setMoney(rupees);
}
/////////////////////
//SETTERS
/////////////////////
void Zakat::setNumSheep(int val)
{
	numSheep = val;
}
void Zakat::setNumOYCow(int val)
{
	numOYCow = val;
}
void Zakat::setNumTYCow(int val)
{
	numTYCow = val;
}
void Zakat::setNumCamel(int val)
{
	numCamel = val;
}
void Zakat::setMoney(double rupee)
{
	money = rupee;
}
/////////////////////
//GETTER
/////////////////////
int Zakat::getNumSheep() const
{
	return numSheep;
}
int Zakat::getNumOYCow() const
{
	return numOYCow;
}
int Zakat::getNumTYCow() const
{
	return numTYCow;
}
int Zakat::getNumCamel() const
{
	return numCamel;
}
double Zakat::getMoney() const
{
	return money;
}