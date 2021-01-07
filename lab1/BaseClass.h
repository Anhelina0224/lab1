#pragma once
#include<string>
#include<iostream>
class BaseClass
{
protected:
	int m_id;
	std::string m_familyName;
	std::string m_name;
	std::string m_fatherName;
public:
	BaseClass ();
	BaseClass (int id, std::string familyName, std::string name, std::string fatherName);
	virtual void print ();
	virtual void setObject ();
};

