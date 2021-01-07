#pragma once
#include <string>
#include"BaseClass.h"
class PaymentForElectricyty : public BaseClass
{
private:
	/*long int m_id;
	std::string m_familyName;
	std::string m_name;
	std::string m_fatherName;*/
	int m_EnerguUse;
	int m_EnergyPayed;
public:
	PaymentForElectricyty ();
	PaymentForElectricyty (long int id,std::string familyName,std::string name, std::string fatherName,int energyUsed, int energyPayed);
};

