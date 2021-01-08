#include <iostream>
#include<fstream>
#include "Phone.h"
#include"PaymentForElectricyty.h"
#include<vector>
#include <random>

int main()
{
	srand (time (0));
	rand ();
	int a;
	std::vector<int> numDivtotwo = {3,1,7,99,33,23,57,47,33,33};
	std::vector<int> notDivtotwo;
	for( int i = 0; i < 10; i++ ) {
		a = rand ()/3;
		if( a % 2 != 0 )
			a--;
		notDivtotwo.push_back(a);
	}
	std::vector<int> mergV;
    for( int i = 0; i < 10; i++ ) {
		a = numDivtotwo[i];
		mergV.push_back(a);
	}
	for( int i = 0; i < 10; i++ ) {
		a = notDivtotwo[i];
		mergV.push_back (a);
	}
	std::cout << "First vector: ";
	for( int i = 0; i < 10; i++ ) { std::cout << numDivtotwo[i] << " "; }
	std::cout << "\n Second vector: ";
	for( int i = 0; i < 10; i++ ) { std::cout << notDivtotwo[i] << " "; }
	std::cout << "\n Merged vectors "; 
	for( int i = 0; i < 20; i++ ) { std::cout << mergV[i] << " "; }
}
