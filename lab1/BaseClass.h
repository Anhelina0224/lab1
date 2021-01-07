#pragma once
#include<string>
class BaseClass
{
protected:
	int m_id;
	std::string m_familyName;
	std::string m_name;
	std::string m_fatherName;
	BaseClass ();
	BaseClass (int id, std::string familyName, std::string name, std::string fatherName);
	
};

