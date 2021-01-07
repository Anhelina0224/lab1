#include "PaymentForElectricyty.h"

PaymentForElectricyty::PaymentForElectricyty ()
	: BaseClass(), m_EnerguUse (0), m_EnergyPayed (0)
{
}

PaymentForElectricyty::PaymentForElectricyty (long int id, std::string familyName, std::string name, std::string fatherName, int energyUsed, int energyPayed)
	: BaseClass(id,familyName,name,fatherName), m_EnerguUse(energyUsed),m_EnergyPayed(energyPayed)
{
}
