#include "BaseClass.h"

BaseClass::BaseClass ()
	:m_id(0),m_familyName("Unknown"),m_name("Unknown"),m_fatherName("Unknown")
{
}

BaseClass::BaseClass (int id, std::string familyName, std::string name, std::string fatherName)
	: m_id(id), m_familyName(familyName), m_name(name), m_fatherName(fatherName)
{
}
