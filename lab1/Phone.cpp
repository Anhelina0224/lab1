#include "Phone.h"
Phone::Phone ()
	:m_id (0), m_familyName ("Unknown"), m_name ("Unknown"), m_fathersName ("Unknown"), m_customerNumber (0), m_TimeOfCityCalls{0,0}, m_TimeofOutCityCalls{0,0}
{

}
Phone::Phone (int id, std::string familyName, std::string name, std::string fatherName, long int customerNumber, short int minutesOfCitiesCalls, short int secondsOfCitiesCalls, short int minutesOfOutCitiesCalls, short int secondsOfOutCitiesCalls)
	: m_id (id), m_familyName (familyName), m_name (name), m_fathersName (fatherName), m_customerNumber (customerNumber), m_TimeOfCityCalls{ secondsOfCitiesCalls,minutesOfCitiesCalls }, m_TimeofOutCityCalls{secondsOfOutCitiesCalls, minutesOfOutCitiesCalls}
{ }

std::istream& operator>>(std::istream &in, Phone &phone)
{
	std::cout << "Enter ID";
	in >> phone.m_id;
	std::cout << "Family name:";
	in >> phone.m_familyName;
	std::cout << "Name: ";
	in >> phone.m_name;
	std::cout << "Father name: ";
	in >> phone.m_fathersName;
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
	std::cout << phone.m_familyName << " " << phone.m_name << " " << phone.m_fathersName << std::endl;
	std::cout << "Customer number: " << phone.m_customerNumber << std::endl;
	std::cout << "Time of city calls: " << phone.m_TimeOfCityCalls.minute << ":" << phone.m_TimeOfCityCalls.second << std::endl;
	std::cout << "Time of out city calls " << phone.m_TimeofOutCityCalls.minute << ":" << phone.m_TimeofOutCityCalls.second;
	return out;
}
