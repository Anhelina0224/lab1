#pragma once
#include <string>
class Errors
{
private:
	std::string m_error;

public:
	Errors (std::string error)
		: m_error (error)
	{
	}

	const char *getError () { return m_error.c_str (); }
};

