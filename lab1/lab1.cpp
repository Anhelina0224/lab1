#include <iostream>
#include<fstream>
#include "Phone.h"
#include"PaymentForElectricyty.h"

int main()
{
	BaseClass *a;
	a = new BaseClass;
	try
	{
		a->addToFile ();
	}
	catch( Errors &exception )
	{
		std::cerr << "An array exception occurred (" << exception.getError () << ")\n";
	}
}
