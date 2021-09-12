/* Author: Jonathan Shnayder 
Course: CSCI-135 
Instructor: Micheal Zamansky 
Assignement: Lab 2D
 
Program prints first 60 values of the fibonacci sequence. At around 2 billion the values are incorrect. 
*/
#include <iostream>

int main() {
	int fib [60];
	
	fib[0] = 0;
	fib[1] = 1;
	
	for(int i = 2; i < 60; i++) {
		fib[i] = fib[i - 1] + fib[ i - 2];
	}
	
	for(int i = 0; i< 60; i++) {
		std::cout << fib[i] << std::endl;
	}	

	//The sequence starts divergeing from the actual numbers because we are using ints which have 4 bytes and can only hold numbers up to 2,147,483,647. So once you add and the number exceeds the limit the sequence breaks off form the truth and the values start wrapping back to negative values. 
	
	return 0;
}
