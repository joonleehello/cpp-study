#include <iostream>
#include <string>

int main(void) {
	
	int val1;
	std::cout << "첫 숫자를 입력해주세요 ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자를 입력해주세요 ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "두 숫자의 합은 " << result << "입니다." << std::endl;
	
	double val3;
	std::cout << "실수를 입력해주세요. ";
	std::cin >> val3;
	std::cout << "입력한 실수는 " << val3 << "입니다." << std::endl;

	std::string str;
	std::cout << "문자열을 입력하세요. ";
	std::cin.ignore();
	std::getline(std::cin, str);
	std::cout << "입력한 문장은 " << str << " 입니다." << std::endl;
	return 0;
}