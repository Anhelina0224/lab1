#include "Phone.h"
Phone::Phone ()
	: m_customerNumber (0), m_TimeOfCityCalls{0,0}, m_TimeofOutCityCalls{0,0}, BaseClass (0, "Unknown", "Unknown", "Unknown")
{}
Phone::Phone (int id, std::string familyName, std::string name, std::string fatherName, long int customerNumber, short int minutesOfCitiesCalls, short int secondsOfCitiesCalls, short int minutesOfOutCitiesCalls, short int secondsOfOutCitiesCalls)
	: m_customerNumber (customerNumber), m_TimeOfCityCalls{ secondsOfCitiesCalls,minutesOfCitiesCalls }, m_TimeofOutCityCalls{secondsOfOutCitiesCalls, minutesOfOutCitiesCalls}, BaseClass (id, familyName, name, fatherName)
{ }

void Phone::print ()
{
	std::cout << "Id: " << m_id << std::endl;
	std::cout << m_familyName << " " << m_name << " " << m_fatherName << std::endl;
	std::cout << "Customer number: " << m_customerNumber << std::endl;
	std::cout << "Time of city calls: " << m_TimeOfCityCalls.minute << ":" << m_TimeOfCityCalls.second << std::endl;
	std::cout << "Time of out city calls " << m_TimeofOutCityCalls.minute << ":" << m_TimeofOutCityCalls.second << std::endl;

}

void Phone::setObject ()
{
	
	std::cout << "Enter ID";
	std::cin >> m_id;
	std::cout << "Family name:";
	std::cin >> m_familyName;
	std::cout << "Name: ";
	std::cin >> m_name;
	std::cout << "Father name: ";
	std::cin >> m_fatherName;
	std::cout << "Customer number: ";
	std::cin >> m_customerNumber;
	std::cout << "Enter time of cities calls minutes than seconds";
	std::cin >> m_TimeOfCityCalls.minute;
	std::cout << "Seconds: ";
	std::cin >> m_TimeOfCityCalls.second;
	std::cout << "Enter time of out cities calls minutes than seconds";
	std::cin >> m_TimeofOutCityCalls.minute;
	std::cout << "Seconds: ";
	std::cin >> m_TimeofOutCityCalls.second;
	
}

void Phone::addToFile ()
{
	m_typeOfclass = 2;
	infile.open ("myFile.txt");
	if( !infile )
		throw(Errors ("Can't open file! Placee: phone addtofile"));
	infile >> m_typeOfclass;
	infile >> m_id;
	infile >> m_familyName;
	infile >> m_name;
	infile >> m_fatherName;
	infile >> m_customerNumber;
	infile >> m_TimeOfCityCalls.minute;
	infile >> m_TimeOfCityCalls.second;
	infile >> m_TimeofOutCityCalls.minute;
	infile >> m_TimeofOutCityCalls.second;
	infile.close ();
}

void Phone::getFromFile ()
{
	outFile.open ("myFile.txt");
	if( !outFile )
		throw(Errors ("Can't open file! Placee: Phone getFromFile"));
	std::cout << "Id";
	outFile << m_id;
	std::cout << "Family name: ";
	outFile << m_familyName;
	std::cout << "Name ";
	outFile << m_name;
	std::cout << "Father name ";
	outFile << m_fatherName;
	std::cout << "Customer";
	outFile << m_customerNumber;
	std::cout << "\nTime city: ";
	outFile << m_TimeOfCityCalls.minute;
	std::cout << ":";
	outFile << m_TimeOfCityCalls.second;
	std::cout << "\nTime out city: ";
	outFile << m_TimeofOutCityCalls.minute;
	std::cout << ":";
	outFile << m_TimeofOutCityCalls.second;
	outFile.close ();
}

std::istream& operator>>(std::istream &in, Phone &phone)
{
	std::cout << "Enter ID";
	in >> phone.m_id;
	std::cout << "Family name:";
	in >> phone.m_familyName;
	std::cout << "Name: ";
	in >> phone.m_name;
	std::cout << "Father name: ";
	in >> phone.m_fatherName;
	std::cout << "Customer number: ";
	in >> phone.m_customerNumber;
	std::cout << "Enter time of cities calls minutes than seconds";
	in >> phone.m_TimeOfCityCalls.minute;
	std::cout << "Seconds: ";
	in >> phone.m_TimeOfCityCalls.second;
	std::cout << "Enter time of out cities calls minutes than seconds";
	in >> phone.m_TimeofOutCityCalls.minute;
	std::cout << "Seconds: ";
	in >> phone.m_TimeofOutCityCalls.second;
	return in;
}

std::ostream &operator<<(std::ostream &out, Phone &phone)
{
	std::cout << "Id: " << phone.m_id << std::endl;
	std::cout << phone.m_familyName << " " << phone.m_name << " " << phone.m_fatherName << std::endl;
	std::cout << "Customer number: " << phone.m_customerNumber << std::endl;
	std::cout << "Time of city calls: " << phone.m_TimeOfCityCalls.minute << ":" << phone.m_TimeOfCityCalls.second << std::endl;
	std::cout << "Time of out city calls " << phone.m_TimeofOutCityCalls.minute << ":" << phone.m_TimeofOutCityCalls.second << std::endl;
	return out;
}

bool operator==(const Phone &pers1, const Phone &pers2)
{
	if( pers1.m_id != pers2.m_id )
		return false;
	else if( pers1.m_familyName != pers2.m_familyName )
		return false;
	else if( pers1.m_name != pers2.m_fatherName )
		return false;
	else if( pers1.m_fatherName != pers2.m_fatherName )
		return false;
	else if( pers1.m_customerNumber != pers2.m_customerNumber )
		return false;
	else if( pers1.m_TimeOfCityCalls.minute != pers2.m_TimeOfCityCalls.minute )
		return false;
	else if( pers1.m_TimeOfCityCalls.second != pers2.m_TimeOfCityCalls.second )
		return false;
	else if( pers1.m_TimeofOutCityCalls.minute != pers2.m_TimeofOutCityCalls.minute )
		return false;
	else if( pers1.m_TimeofOutCityCalls.second != pers2.m_TimeofOutCityCalls.second )
		return false;
	return true;
}
