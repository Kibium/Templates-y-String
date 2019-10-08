#include <vector>
#include <iostream>

class Strin {

private:
	char chars[];

public:

	/*Strin operator + (const Strin &s) {

		for (int i = 0; i < s.length(); i++) {
			chars.push_back(s.chars[i]);
		}
		return *this;
	}*/

	/*Strin operator = (const char& s) {

		int count = 0;
		chars.clear();

		while (s != '\0') {
			chars.push_back(s + count);
			count++;
		}

		return *this;
	}*/

	/*	bool operator == (const Strin &s) {

			bool equal = false;
			for (int i = 0; i < s.chars.size(); ++i) {
				if (chars[i] != s.chars[i])
					return false;
				else
					continue;
			}

			return true;
		}*/

	Strin(const char* string) {

		char * temp = chars;
		int counter = 0;

		//We modify directly the 'chars' array
		while (*temp++ = *string++) {

			//*(chars - 1) = *temp;

		}
	}

	Strin(const Strin& copy) {

		int size = copy.length();

		//Pointer to out array, to copy its data later
		char* temp = chars;

		//Pointer to the parameter so we can use the following syntaxis
		const char* temp_copy = copy.chars;
		while (*temp++ = *temp_copy++) {

			//Directly modifying the 'chars' array
			*temp = *temp_copy;
		}



	};

	int length() const {

		const char * temp = chars;
		int size = 0;

		//I iterate the array to the last character, which is a '\0', an invisible one
		while (*temp != '\0') {

			size++;
			temp++;

		}

		return size;
	}

	//Supposedly substitutes all characters by '\0'
	void clear() {
		int size = length();
		memset(chars, '\0', size * sizeof(char));
	}
	void print() const {

		int size = length();

		for (int i = 0; i < size; i++)
			std::cout << chars[i];

		std::cout << std::endl;
	}

};