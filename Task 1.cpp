#include <iostream>
#include <string>

int main() {
	
std::string fullname; 
char name{};
int age{};
long number{};
int day, month, year{};

std::cout << "Please enter your full name: ";
std::getline(std::cin, fullname);
std::cout << "Please enter your initial: ";
std::cin >> name;
std::cout << "Please enter your age: ";
std::cin >> age;
std::cout << "Please enter your phone number: ";
std::cin >> number;
std::cout << "Please enter your birthday: ";
std::cin >> day >> month >> year;

std::cout << "| Name     |" << fullname << std::endl;
std::cout << "| Initial  |" << name << std::endl;
std::cout << "| Age      |" << age << std::endl;
std::cout << "| Phone num|" << number << std::endl;
std::cout << "| Birthday |" << day << month << year << std::endl;

	return 0;
}

