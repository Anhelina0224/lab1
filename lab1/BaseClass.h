#pragma once
#include<string>
#include<iostream>
#include<fstream>
class BaseClass
{
protected:
	int m_id;
	std::string m_familyName;
	std::string m_name;
	std::string m_fatherName;
	int m_typeOfclass;
	std::fstream infile;
	std::ofstream outFile;
public:
	BaseClass ();
	BaseClass (int id, std::string familyName, std::string name, std::string fatherName);
	virtual void print ();
	virtual void setObject ();
	virtual void addTofile ();
	virtual void getFromFile ();

};

