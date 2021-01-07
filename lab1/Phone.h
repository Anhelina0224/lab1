#pragma once
#include <string>
#include <iostream>
#include"BaseClass.h"

class Phone : public BaseClass
{
private:
	struct m_time
	{
		short int second;
		short int minute;
	};
	/*long int m_id;
	std::string m_familyName;
	std::string m_name;
	std::string m_fathersName;*/
	long int m_customerNumber;
	m_time m_TimeOfCityCalls;
	m_time m_TimeofOutCityCalls;
public:
	Phone ();
	Phone (int id, std::string familyName, std::string name, std::string fatherName, long int customerNumber, short int minutesOfCitiesCalls, short int secondsOfCitiesCalls, short int minutesOfOutCitiesCalls, short int secondsOfOutCitiesCalls);
	friend std::istream& operator>>(std::istream& in, Phone &phone);
	friend std::ostream& operator<<(std::ostream &out, Phone &phone);
	friend bool operator==(const Phone& pers1, const Phone &pers2);
	~Phone (){}
};
