#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <limits>
#include <cmath>


int main() {
	int myNumber;
	std::cout << "enter any number \n";
	std::cin >> myNumber;
	std::cout << "this is your number; " << myNumber << "\n... enter\n";
	//i am experimenting with this here
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "check \n";
	//the fUnnY part (also experimental and not understood well)
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0,51);

	for (int i=1; i < myNumber; ++i) {
		std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(1000.0/i));
		int r = dis(gen);
		//establishes the characters to be used more or less
		char c = (r < 26) ? ('A' + r) : ('a' +r - 26);
		std::cout << c << std::flush;
	}
	
	std::cout << '\n';
	
	return 0;
}
