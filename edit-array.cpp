#include <iostream>

int main() {
	int myData[10];
	int index;
	int value;	
			
	for(int i = 0; i<10; i++) {
		myData[i] = 1;
	}

	do {
		for(int i = 0; i<10; i++) {
        	std::cout << myData[i] << " ";
    	}
	
		std::cout << std::endl;
		std::cout << std::endl << "Input index: "; 
		std::cin >> index;

		
		std::cout << "Input value: ";
		std::cin >> value;
		std::cout << std::endl;
		
		if( 0 <= index && index < 10) {
			myData[index] = value;	
		} else {
			std::cout << "Index out of range. Exit";
		}
	} while(0 <= index && index < 10);
	
	std::cout << std::endl;
	
	return 0;
}


