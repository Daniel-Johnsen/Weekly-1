#include <iostream>

int  main() {
	
	int age{};

	std::cout << "What is your age? ";
	std::cin >> age;

	if (age < 20) {
		std::cout << "You are young!";
	}
	else if (age < 40) {
		std::cout << "You are a grown up!";
	}
	else if (age < 60) {
		std::cout << "You are old!";
	}
	else if (age > 59) {
		std::cout << "You ARE really old!";
	}

	return 0;
}