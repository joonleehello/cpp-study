#include <iostream>

int main(void) {

	char name[100];
	char lang[200];

	std::cout << "이름을 입력하세요." << std::endl;
	std::cin >> name;

	std::cout << "당신이 사용하는 언어는?" << std::endl;
	std::cin >> lang;

	std::cout << "당신의 이름은 " << name << "이고" << " 당신이 주로 사용하는 언어는 " << lang << "입니다." << std::endl;

	return 0;
}