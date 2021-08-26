#include <iostream>
#include <string>

int main() {
	
	std::string name{};
int age{};
char answer{};

std::cout << "What is your name? ";
std::getline(std::cin, name);
std::cout << "How old are you? ";
std::cin >> age;
std::cout << "Do you like coffee? ";
std::cin >> answer;

std::cout << std::endl << "Your name is: " << name << std::endl << std::endl;
std::cout << "You are " << age << " years old" << std::endl << std::endl;
if (answer == 'Y'|| answer == 'y') {
	std::cout << "It seems you like coffee" << std::endl; 
}

else if (answer == 'N'|| answer == 'n') {
	std::cout << "Oh, you don't like coffee" << std::endl;	
}
else {
	std::cout << "Invalid input" << std::endl;
}

	return 0;
}