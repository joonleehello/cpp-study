#include <iostream>

int Adder(int num1 = 1, int num2 = 2) {
	return num1 + num2;
}

int main(void) {

	std::cout << Adder() << std::endl;
	std::cout << Adder(10) << std::endl;
	std::cout << Adder(4,13) << std::endl;

	return 0;
}