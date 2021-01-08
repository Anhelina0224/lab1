#include "BaseClass.h"


BaseClass::BaseClass ()
	:m_id(0),m_familyName("Unknown"),m_name("Unknown"),m_fatherName("Unknown"),m_typeOfclass(0)
{
}

BaseClass::BaseClass (int id, std::string familyName, std::string name, std::string fatherName)
	: m_id(id), m_familyName(familyName), m_name(name), m_fatherName(fatherName)
{
}

void BaseClass::print ()
{
	std::cout << "Id: " << m_id << std::endl;
	std::cout << m_familyName << " " << m_name << " " << m_fatherName << std::endl;
}

void BaseClass::setObject ()
{
	std::cout << "Enter ID";
	std::cin >> m_id;
	std::cout << "Family name:";
	std::cin >> m_familyName;
	std::cout << "Name: ";
	std::cin >> m_name;
	std::cout << "Father name: ";
	std::cin >> m_fatherName;
}

void BaseClass::addTofile ()
{
	m_typeOfclass = 3;
	infile.open ("myFile.txt");
	infile >> m_typeOfclass;
	infile >> m_id;
	infile >> m_familyName;
	infile >> m_name;
	infile >> m_fatherName;

	infile.close ();
}

void BaseClass::getFromFile ()
{
	outFile.open ("myFile.txt");
	std::cout << "Id";
	outFile << m_id;
	std::cout << "Family name: ";
	outFile << m_familyName;
	std::cout << "Name ";
	outFile << m_name;
	std::cout << "Father name ";
	outFile << m_fatherName;
	outFile.close ();

}


