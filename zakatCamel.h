#ifndef ZAKATCAMEL_H
#define ZAKATCAMEL_H
#include "zakat.h"

class CamelZakat : public Zakat
{
protected:
	int tCNum, tSNum;
public:
	CamelZakat();
	virtual void calculateZakat() override;
	virtual void display() const override;
	//setters
	void setTCNum(int);
	void setTSNum(int);
	//getter
	int getTCNum() const;
	int getTSNum() const;
};

#endif