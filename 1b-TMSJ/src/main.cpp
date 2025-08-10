#include <iostream>
int main() {
	std::string thename;
	std::cout << "What is your name? ";
	std::getline(std::cin, thename);
	std::cout << "Nice to meet you, " << thename << "!\n";
	return 0;
}
