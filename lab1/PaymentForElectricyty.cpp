#include "PaymentForElectricyty.h"

PaymentForElectricyty::PaymentForElectricyty ()
	: BaseClass(), m_EnerguUse (0), m_EnergyPayed (0)
{
}

PaymentForElectricyty::PaymentForElectricyty (long int id, std::string familyName, std::string name, std::string fatherName, int energyUsed, int energyPayed)
	: BaseClass(id,familyName,name,fatherName), m_EnerguUse(energyUsed),m_EnergyPayed(energyPayed)
{
}

void PaymentForElectricyty::print ()
{
	std::cout << "Id: " << m_id << std::endl;
	std::cout << m_familyName << " " << m_name << " " << m_fatherName << std::endl;
	std::cout << "Energy used" << m_EnerguUse;
	std::cout << "Energy payed " << m_EnergyPayed;

}

void PaymentForElectricyty::setObject ()
{
	std::cout << "Enter ID";
	std::cin >> m_id;
	std::cout << "Family name:";
	std::cin >> m_familyName;
	std::cout << "Name: ";
	std::cin >> m_name;
	std::cout << "Father name: ";
	std::cin >> m_fatherName;
	std::cout << "Use power: ";
	std::cin >> m_EnerguUse;
	std::cout << "Payed power: ";
	std::cin >> m_EnergyPayed;
}

void PaymentForElectricyty::addToFile ()
{
	m_typeOfclass = 1;
	infile.open ("myFile.txt");
	if( !infile )
		throw(Errors ("Can't open file! Placee: paymentforElectricity addtoFile"));
	infile >> m_typeOfclass;
	infile >> m_id;
	infile >> m_familyName;
	infile >> m_name;
	infile >> m_fatherName;
	infile >> m_EnerguUse;
	infile >> m_EnergyPayed;
	infile.close ();
}

void PaymentForElectricyty::getFromFile ()
{
	outFile.open ("myFile.txt");
	if( !outFile )
		throw(Errors ("Can't open file! Placee: paymentforelectricity getFromFile"));
	std::cout << "Id";
	outFile << m_id;
	std::cout << "Family name: ";
	outFile << m_familyName;
	std::cout << "Name ";
	outFile << m_name;
	std::cout << "\nFather name ";
	outFile << m_fatherName;
	std::cout << "\nUsedEnergy ";
	outFile << m_EnerguUse;
	std::cout << "\nPayedEnergy ";
	outFile << m_EnergyPayed;
	outFile.close ();
}
