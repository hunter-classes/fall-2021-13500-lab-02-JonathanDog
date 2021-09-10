#include <iostream>

int main() {
	int L;
	int U;

	std::cout << "Please enter L: ";
	std::cin >> L;

	std::cout << "Please enter U: ";
	std::cin >> U;

	for(int i = L; i < U; i++) {
		std::cout << i << " ";
	}	
	return 0;

}
