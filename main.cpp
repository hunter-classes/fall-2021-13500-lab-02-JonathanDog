/* Author: Jonathan Shnayder 
Course: CSCI-135 
Instructor: Micheal Zamansky 
Assignement: Lab 2B 

Program prints all the values from a specifc range. The print_interval function comes from a outside file and linked with a funcs.h file 
*/
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
