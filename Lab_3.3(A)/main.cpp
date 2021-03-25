#include <iostream>

#include "FuzzyNumber_Private.h"
#include "FuzzyNumber_Public.h"


int main(void) {
	using std::cout;

	std::cout << "\n\n////////////////////////////////////////////////////////////1 obj\n";

	FuzzyNumber_Private A_1, B_1, C_1;
	std::cin >> A_1;
	std::cin >> B_1;

	cout << A_1;
	cout << B_1;

	C_1 = A_1 + B_1;

	cout << "\n\nAddit object A_1 i B_1: ";
	cout << C_1;
	cout << C_1.operator std::string();

	C_1 = A_1 * B_1;
	cout << "\n\nMulti object A_1 i B_1: ";
	cout << C_1;
	cout << C_1.operator std::string();


	std::cout << "\n\n////////////////////////////////////////////////////////////2 obj\n";

	FuzzyNumber_Public A_2, B_2, C_2;
	std::cin >> A_2;
	std::cin >> B_2;

	cout << A_2;
	cout << B_2;

	C_2 = A_2 + B_2;

	cout << "\n\nAddit object A_2 i B_2: ";
	cout << C_2;
	cout << C_2.operator std::string();

	C_2 = A_2 * B_2;
	cout << "\n\nMulti object A_2 i B_2: ";
	cout << C_2;
	cout << C_2.operator std::string();

	return 0;
}