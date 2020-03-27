#ifndef ZAKAT_H
#define ZAKAT_H
#include <iostream>
using namespace std;

class Zakat
{
protected:
	int numSheep, numOYCow, numTYCow, numCamel;
	double money; // contains money that is due in zakat
public:
	Zakat(); // set num = money = 0.0
	Zakat(int); // set num;
	Zakat(double); //set money;
	virtual void calculateZakat() = 0;
	virtual void display() const = 0; // display zakat
	// setter
	void setNumSheep(int);
	void setNumOYCow(int);
	void setNumTYCow(int);
	void setNumCamel(int);
	void setMoney(double);
	// getter
	int getNumSheep() const;
	int getNumOYCow() const;
	int getNumTYCow() const;
	int getNumCamel() const;
	double getMoney() const;
};
#endif