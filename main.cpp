#include <iostream>
using namespace std;

int age;
char name;
int main()
{
	std::cout << "성의 이니셜을 입력하세요. \n";
	std::cin >> name;
	std::cout << "나이를 입력하세요. \n";
	std::cin >> age;

	showme(age, name);


	return 0;
}

void showme(int age, char name)
{
	std::cout << name << " 님은 " << age << " 세 입니다. \n";

}