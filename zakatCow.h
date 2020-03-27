#ifndef ZAKATCOW_H
#define ZAKATCOW_H
#include "zakat.h"

class CowZakat : public Zakat
{
protected:
	int tOneYear, tTwoYear;
public:
	CowZakat();
	virtual void calculateZakat() override;
	virtual void display() const override;
	//setters
	void setOYCow(int);
	void setTYCow(int);
	//getters
	int getOYCow() const;
	int getTYCow() const;
};
#endif