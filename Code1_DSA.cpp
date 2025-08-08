#include <iostream>
#include <string>

int main() {
	int age;
	std::string name;
	
	std::cout << "Enter your full name: ";
	std::getline(std::cin >> std::ws, name);
	
	std::cout << "Enter your age: ";
	std::cin >> age;
	
	std::cout << "Hello " << name << ", you are " << age << " years old!" << std::endl;
	
	std::cout << "\nHello " << name << ", you are " << age << " years old!" << std::endl;
	std::cout << "You will turn 60 years old in the year of " << 2025 + (60 - age) << "." << std::endl;
	
	return 0;
}
