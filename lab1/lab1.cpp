#include <iostream>
#include "Phone.h"
#include"PaymentForElectricyty.h"
int main()
{
	int n;
	BaseClass *p[4];
	for( int i = 0; i < 4;i++ ) {
		std::cout << "Enter 1 to add Phone:\n"; 
		std::cout << "Anithing to add pay for energy\n";
		std::cin >> n;
		if( n == 1 )
			p[i] = new Phone;
		else p[i] = new PaymentForElectricyty;

	    p[i]->setObject();
	}


	for( int i = 0; i < 4; i++ ) {
		p[i]->print ();
		delete p[i];
	}
}
