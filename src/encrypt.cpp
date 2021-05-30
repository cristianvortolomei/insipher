#include <iostream>

int getPosition (char input) {
    return (int)input-64;
}

int encrypt() {
	std::string input;
	std::string output;

	std::cout << "Input: ";
	std::cin >> input;
	
	for (size_t i = 0; i < input.length(); i++) {
		int position = getPosition(input[i]);
        for (int j = 0; j < position; j++) {
            output = output + ')';
        }
        output = output + '(';
	}

	std::cout << "Output: " << output << std::endl;
	return 0;
}