#include "Phone.h"
Phone::Phone ()
	:m_id (0), m_familyName ("Unknown"), m_name ("Unknown"), m_fathersName ("Unknown"), m_customerNumber (0), m_TimeOfCityCalls{0,0}, m_TimeofOutCityCalls{0,0}
{

}
Phone::Phone (int id, std::string familyName, std::string name, std::string fatherName, long int customerNumber, short int minutesOfCitiesCalls, short int secondsOfCitiesCalls, short int minutesOfOutCitiesCalls, short int secondsOfOutCitiesCalls)
	: m_id (id), m_familyName (familyName), m_name (name), m_fathersName (fatherName), m_customerNumber (customerNumber), m_TimeOfCityCalls{ secondsOfCitiesCalls,minutesOfCitiesCalls }, m_TimeofOutCityCalls{secondsOfOutCitiesCalls, minutesOfOutCitiesCalls}
{ }


