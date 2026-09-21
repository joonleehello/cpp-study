#include <iostream>

int main(void) {

	int num;
	std::cout << "몇 단을 출력 할까요?" << std::endl;
	std::cin >> num;

	std::cout << "=== " << num << " 단 ===" << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " x " << i << " = " << num * i << std::endl;
	}
	
	return 0;
}