#include <iostream>

void MyFunc(void) {
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(int a) {
	std::cout << "MyFunc(int a) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void) {
	MyFunc();
	MyFunc(20);
	MyFunc(15, 20);

	return 0;
}