#ifndef MONEYZAKAT_H
#define MONEYZAKAT_H
#include "zakat.h"
#include <iostream>
using namespace std;

class MoneyZakat : public Zakat
{
protected:
	double goldVal, silverVal, tradeVal;
public:
	MoneyZakat();
	MoneyZakat(double, double, double);
	virtual void calculateZakat() override; 
	virtual void display() const override;
	// setters
	void setGoldVal(double);
	void setSilverVal(double);
	void setTradeVal(double);
	// getters
	double getGoldVal() const;
	double getSilverVal() const;
	double getTradeVal() const;
};
#endif