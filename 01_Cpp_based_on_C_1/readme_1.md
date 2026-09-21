# Chapter 01 - C언어 기반의 C++

## HelloWorld.cpp

#include <iostream> : input output stream 
std::cout<< '출력대상'
'<<' 연산자로 대상 연결
std::endl 개행


## SimpleAdder.cpp

std::cin >> "넣는대상" 
std::cout은 별도의 상정을 하지 않으면 유효숫자 6자리까지만 출력
>> std::setprecision(n) - 유효숫자를 n자리까지 출력  #include <iomanip>
>> 사용법 : std::cout << std::setprecision(n)
>> std::cout << std::fixed << std::setprecision(4); -  유효숫자가 아니라 소수점 아래 4자리까지 출력
std::cin >> str 에서 str은 띠어쓰기 기준으로 저장함
ex)입력해주세요 - 나는 돼지 입니다. (나는 만 저장)
enter - \n을 입력 버퍼에 넣는다.
줄 자체로 저장하려면
std::cin.ignore();
std::cin.getline(str, 100);
아래가 더 안전
#include <limits>
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
>> 입력 버퍼에서 \n이 나올 때까지 남은 문자를 전부 버려라.
현대에서는 string을 많이 사용한다.

## BetweenAdder.cpp
if-else문, for문은 C와 같다.
std::cin >> val1 >> val2  띄어쓰기로 구분해서 연속 입력 가능