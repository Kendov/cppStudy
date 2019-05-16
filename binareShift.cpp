//#include "link.h"
#include <iostream>
#include <bitset>





int main() {
	unsigned long long int var;

	

	for (int index = 0; index <= 64; index++) {

		var = 1 << index;
		std::cout<< index + 1 << ": " << var << " --- " << std::bitset<64>(var) <<std::endl;
		
	}

	std::cin.get();
}


