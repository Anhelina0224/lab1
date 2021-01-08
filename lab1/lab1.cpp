#include <iostream>
#include<fstream>
#include "Phone.h"
#include"PaymentForElectricyty.h"

int main()
{
	int d;
	int n;
	BaseClass *p;
	std::fstream fout;
	std::fstream readf;
	bool addf = true;
	char k;
	std::string path = "myfile.txt";
	fout.open (path, std::ios::out | std::ios::binary);
	if( !fout ) {
		std::cout << "Can't open file" << std::endl;
		return 1;
	}
	else {
		do {
			std::cout << "1 to add payForElectricity 2 to add phone \n";
			std::cin >> d;
			switch( d ) {
			case 1:
				p = new PaymentForElectricyty;
				p->setObject ();
				p->addTofile ();
				//fout.write ((char *)&p, sizeof (PaymentForElectricyty));
				break;
			case 2:
				p = new Phone;
				p->setObject ();
				fout.write ((char *)&p, sizeof (Phone));
				break;
			case 3:
				p = new BaseClass;
				p->setObject ();
				fout.write ((char *)&p, sizeof (BaseClass));
			default:
				std::cout << " unccorect symbol\n";
				p = 0;
			}
			do {
				std::cout << "Do you want to enter next one? y/n";
				std::cin >> k;
			} while( k != 'y' && k != 'n' );
			if( k == 'n' ) addf = false;
		} while( addf );

	}
	fout.close ();
	p = new Phone;
	readf.read ((char *)&p, sizeof (Phone));
	p->print ();
	delete p;
}
