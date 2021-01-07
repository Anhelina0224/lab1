#include <iostream>
#include "Phone.h"
int main()
{
	Phone phone,phone2;
	std::cin >> phone;
	std::cout << phone;
	std::cin >> phone2;
	if( phone == phone2 )
		std::cout << "They are the same! ";
	else
		std::cout << "Different information ";
}
