//Jonathan Shnayder
//Lab 2 A
#include <iostream>

int main () {
	std::cout << "Please enter an integer: ";
	int number;

	std::cin >> number;
	
	while(number > 100 || number < 0) {
		std::cout <<  "Please re-enter: ";
		std::cin >> number;
	} 
	
	int squared = number * number;
	std::cout << "Number squared is " << squared << endl;
	


}
