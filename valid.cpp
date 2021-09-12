/* Author: Jonathan Shnayder 
Course: CSCI-135 
Instructor: Micheal Zamansky 
Assignement: Lab 2A 

Program takes a number from the user that is between 0 and 100 and prints out the squared value. It will keep asking for a number until it is beteween the correct range 
*/

#include <iostream>

int main () {
	std::cout << "Please enter an integer: ";
	int number;

	std::cin >> number;
	
	while(number >= 100 || number <= 0) {
		std::cout <<  "Please re-enter: ";
		std::cin >> number;
	} 
	
	int squared = number * number;
	std::cout << "Number squared is " << squared << std::endl;
	


}
