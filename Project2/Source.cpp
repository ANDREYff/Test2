#include <iostream>
#include <conio.h>

void main()
{
	int value;
	std::cin >> value;

	int factorial = 0;

	while (value != 1) {
		++factorial;
		value /= factorial;
	}

	std::cout << factorial;

	_getch();
}