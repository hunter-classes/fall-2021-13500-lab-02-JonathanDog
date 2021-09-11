#include <iostream>

#include "funcs.h"

int main() {
	
	std::cout << "Testing L = -5 U = 20" << std::endl;
	print_interval(-5,20);
	std::cout << std::endl;
	
	std::cout << "Testing L = 30 U = 35" << std::endl;
	print_interval(30, 35);
	std::cout << std::endl;

	std::cout << "Testing L = -22 U = -12" << std::endl;
	print_interval(-22, -12);	
	std::cout << std::endl;

	
	

}
