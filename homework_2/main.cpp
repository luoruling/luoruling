#include <iostream>
#include "Vector.h"
#include "Timer.h"
using namespace std;

int main()
{
	custom::Vector<int> vec;
	{
		custom::Timer timer;
		for (int i = 0; i < 10000; i++) {
			vec.push_back(i);
		}
	}
	std::cout << "Push complete!\n\n";
	{
		custom::Timer timer;
		for (int i = 0; i < 10000; i++) {
			vec[i] += 1;
		}
	}
	std::cout << "Modify complete!\n\n";
	{
		custom::Timer timer;
		for (int i = 0; i < 10000; i++) {
			vec.pop_back();
		}
	}
	std::cout << "Delete complete!\n\n";
	std::cout << "The current size of vector is " << vec.size() << "\n";
	if (vec.empty()) {
		std::cout << "Empty!\n";
	}
	else {
		std::cout << "Not empty!\n";
	}
	return 0;
}