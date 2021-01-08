#pragma once
#include <string>
#include"BaseClass.h"
class PaymentForElectricyty : public BaseClass
{
private:
	
	int m_EnerguUse;
	int m_EnergyPayed;
public:
	PaymentForElectricyty ();
	PaymentForElectricyty (long int id,std::string familyName,std::string name, std::string fatherName,int energyUsed, int energyPayed);
	virtual void print ();
	virtual void setObject ();
	virtual void addToFile ();
	virtual void getFromFile ();

};

