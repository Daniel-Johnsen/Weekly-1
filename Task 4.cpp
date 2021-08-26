#include <iostream>

int main(){

int input;

std::cout << "What is your favourite drink? " << std::endl;
std::cout << "1. Coffee" << std::endl;
std::cout << "2. Tea" << std::endl;
std::cout << "3. Coca cola " << std::endl;
std::cin >> input;

if (input == 1) {
	std::cout << std::endl << "Coffee is delicious";
}
else if (input == 2) {
	std::cout << std::endl << "Tea give peace of mind";
}
else if (input == 3) {
	std::cout << std::endl << "Coke will give you a white smile";
}
else {
	std::cout << "Invalid input";
}
return 0;