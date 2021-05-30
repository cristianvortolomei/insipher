#include <iostream>
#include "include/encrypt.h"
#include "include/decrypt.h"

int main() {
	char answer;

	std::cout << "Do you need the encryptor or the decryptor?\n(1 - Encyptor; 2 - Decryptor)\nChoice: ";
	std::cin >> answer;

	switch(answer) {
		case '1':
			encrypt();
			break;
		case '2':
			decrypt();
			break;
		default:
			std::cout << "Not an option.\n";
	}
	system("PAUSE");
	return 0;
}