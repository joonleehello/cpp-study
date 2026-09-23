# Chapter 01_03 - 매개변수의 디폴트 값

## DefaultValue1.cpp

int Adder(int num1 = 1, int num2 = 2) 이런식으로 함수 인자의 디폴트값을 설정할 수 있다.
첫 인자는 디폴트값을 쓰고, 두번째 값만 대입하려면 함수를 오버로딩해서 매개변수를 새로 짜거나, 디폴트값을 전달해야만 한다. 
디폴트 값은 함수의 선언 부분에만 표현하면 된다. 
(함수의 원형을 별도로 선언하는 경우, 매개변수의 디폴트 값은 함수의 원형 선언에만 위치시켜야 한다.)
>> Adder( , 5) 이런식으로 사용 X

```cpp
#include <iostream>

int Adder(int num1 = 1, int num2 = 2);

int main(void){
    std::cout<<Adder(3,5)<<std::endl;
    return 0;
}

int Adder(int num1, int num2){
    return num1+num2;
}

```