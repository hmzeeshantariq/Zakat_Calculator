#include "moneyZakat.h"
#include "zakatSheep.h"
#include "zakatCow.h"
#include "zakatCamel.h"
#include <iostream>
using namespace std;

const int ZAKAT_ON_MONEY = 1;
const int ZAKAT_ON_ANIMALS = 2;
const int ZAKAT_ON_SHEEPS = 1, ZAKAT_ON_COWS = 2, ZAKAT_ON_CAMELS = 3;
const int EXIT = 3;

void display(const Zakat* obj)
{
	obj->display();
}

int main()
{
	Menu:
	int ch;
	cout<< "\t\t\t<<<<MENU>>>>\n";
	cout<< "\n1_Calculate Zakat On Money"
		<< "\n2_Calculate Zakat On Animals"
		<< "\n3_Exit"
		<< "\n\nEnter Your Choice: ";
	//cin >> ch;
	ch = 2;
	switch (ch)
	{
	case ZAKAT_ON_MONEY:
	{
		double gold, silver, trade;
		cout << "\nEnter Total Gold Value: ";
		cin >> gold;
		cout << "Enter Total Silver Value: ";
		cin >> silver;
		cout << "Enter Total Trade Value: ";
		cin >> trade;
		MoneyZakat monZakat(gold, silver, trade);
		monZakat.calculateZakat();
		display(&monZakat);
		cout << "\nDo You Want To Go Back in Main Menu ? (Y/N or y/n): ";
		char choice;
		cin >> choice;
		if (toupper(choice) == 'Y') { goto Menu; }
		break;
	}
	case ZAKAT_ON_ANIMALS:
	{
		cout << "\n1_Calculate Zakat on Sheeps"
			<< "\n2_Calculate Zakat on Cows"
			<< "\n3_Calculate Zakat on Camels"
			<< "\n\nEnter Your Choice: ";
		//cin >> ch;
		ch = 3;
		switch (ch)
		{
		case ZAKAT_ON_SHEEPS:
		{
			SheepZakat obj;
			int var;
			cout << "\nEnter Total Number of Sheeps: ";
			cin >> var;
			obj.setSheep(var);
			obj.calculateZakat();
			display(&obj);
			cout << "\nDo You Want To Go Back in Main Menu ? (Y/N or y/n): ";
			char choice;
			cin >> choice;
			if (toupper(choice) == 'Y') { goto Menu; }
			break;
		}
		case ZAKAT_ON_COWS:
		{
			CowZakat obj;
			int cow;
			cout << "\n\nEnter Total One Year Cow: ";
			cin >> cow;
			obj.setOYCow(cow);
			cout << "Enter Total Two Year Cow: ";
			cin >> cow;
			obj.setTYCow(cow);
			obj.calculateZakat();
			display(&obj);
			char choice;
			cout << "\nDo You Want To Go Back in Main Menu ? (Y/N or y/n): ";
			cin >> choice;
			if (toupper(choice) == 'Y') { goto Menu; }
			break;
		}
		case ZAKAT_ON_CAMELS:
		{
			CamelZakat obj;
			int var;
			cout << "\n\nEnter Number of Camels: ";
			cin >> var;
			obj.setTCNum(var);
			cout << "Enter Number of Sheeps: ";
			cin >> var;
			obj.setTSNum(var);
			obj.calculateZakat();
			display(&obj);
			char choice;
			cout << "\nDo You Want To Go Back in Main Menu ? (Y/N or y/n): ";
			cin >> choice;
			if (toupper(choice) == 'Y') { goto Menu; }
			break;
		}
		default:
		{
			cout << "\nWrong Input !\nBye Bye :-)\n";
			break;
		}
		}
		break;
	}
	case EXIT: 
	{
		cout << "\nExiting... \nDone!\n\n";
		exit(0);
	}
	default:
	{
		cout << "\nWrong Input !\nBye Bye :-)\n";
		break;
	}
	}
	return 0;
}
