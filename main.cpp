#include <iostream>
using namespace std;

int age;
char name;
int main()
{
	std::cout << "���� �̴ϼ��� �Է��ϼ���. \n";
	std::cin >> name;
	std::cout << "���̸� �Է��ϼ���. \n";
	std::cin >> age;

	showme(age, name);


	return 0;
}

void showme(int age, char name)
{
	std::cout << name << " ���� " << age << " �� �Դϴ�. \n";

}