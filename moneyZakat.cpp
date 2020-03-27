#include "moneyZakat.h"

MoneyZakat::MoneyZakat() : Zakat()
{
	goldVal = silverVal = tradeVal = 0.0;
}
MoneyZakat::MoneyZakat(double gold, double silver, double trade)
{
	setGoldVal(gold);
	setSilverVal(silver);
	setTradeVal(trade);
}
/////////
//setters
void MoneyZakat::setGoldVal(double gold)
{
	goldVal = gold;
}
void MoneyZakat::setSilverVal(double silver)
{
	silverVal = silver;
}
void MoneyZakat::setTradeVal(double trade)
{
	tradeVal = trade;
}
///////////
//getters
double MoneyZakat::getGoldVal() const
{
	return goldVal;
}
double MoneyZakat::getSilverVal() const
{
	return silverVal;
}
double MoneyZakat::getTradeVal() const
{
	return tradeVal;
}

void MoneyZakat::calculateZakat()
{
	Zakat::money = (getGoldVal() + getSilverVal() + getTradeVal())/ 40;
}
void MoneyZakat::display() const
{
	cout << "\nTotal Gold value: " << getGoldVal() << endl
		<< "Total Silver value: " << getSilverVal() << endl
		<< "Total Trade things value: " << getTradeVal() << endl
		<< "\nSum of all three things: " << getGoldVal() + getSilverVal() + getTradeVal() << endl
		<< "Zakat on total money value : " << Zakat::getMoney() << endl;
}