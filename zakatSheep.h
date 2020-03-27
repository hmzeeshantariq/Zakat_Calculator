#ifndef SHEEPZAKAT_H
#define SHEEPZAKAT_H
#include "zakat.h"

class SheepZakat : public Zakat
{
protected:
	int tNum; 
public:
	SheepZakat(); 
	virtual void calculateZakat() override;
	virtual void display() const override;
	//setter
	void setSheep(int);
	//getter
	int getSheep() const;
};

#endif