#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>

using double_milli = std::chrono::duration<double, std::milli>;

void flushInput() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {

	int myNumber;
	std::cout << "Enter any number: ";
	std::cin >> myNumber;
	std::cout << "\nThis is your number: " << myNumber << "\n";

	flushInput();
	std::cout << "Press ENTER to continue";
	std::cin.get();
	std::cout << "\n";

	srand(time(0));

	for (int i = 1; i < myNumber; ++i) {
		std::this_thread::sleep_for(double_milli(1000.0 / i));

		int randomNumber = rand() % 26;
		int randomBase = (rand() % 2 == 0) ? 65 : 97;

		char c = static_cast<char>(randomNumber + randomBase);
		std::cout << c << std::flush;
	}
	
	std::cout << '\n';
	
	return 0;
}
