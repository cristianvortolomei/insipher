#include <iostream>

char letterCheck(int counting) {
    return (char)counting + 64;
}

int decrypt() {
	int counting=0;

	std::string input;
	std::string output;

	std::cout << "Input: ";
	std::cin >> input;
	
	for (size_t i = 0; i < input.length(); i++) {
		switch (input[i]) {
		case ')':
			counting = counting + 1;
			break;
		case '(':
			if(counting>0) {
			output = output + letterCheck(counting);
			}
			counting = 0;
			break;
		default:
			break;
		}
	}

	std::cout << "Output: " << output << std::endl;
	return 0;
}