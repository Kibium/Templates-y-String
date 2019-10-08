#include <vector>
#include <iostream>

class Strin {

private:
	char *chars;


public:

	//This constructor works
	Strin(const char* source) {

		int size = 0;
		const char* temp = source;

		//Get the size
		while (*temp != '\0') {

			size++;
			*temp++;

		}

		chars = new char[size];

		for (int i = 0; i < size; i++) {

			chars[i] = source[i];

		}
	}

	//This constructor also works
	Strin(const Strin& source) {

		int size = 0;

		char* temp = source.chars;
		char* temp2 = source.chars;

		while (*temp != '\0') {

			size++;
			temp++;

		}

		chars = new char[size + 1];


		for (int i = 0; i < size; i++) {

			chars[i] = temp2[i];

		}

	};
	
	friend Strin operator + (const Strin &a, const Strin &b) {

		Strin result(" ");

		//In order to iterate through the two given Strin objects
		int sizeA = 0;
		int sizeB = 0;

		//Auxiliar variable that allows to iterate through the result Strin
		int counter = 0;

		char* temp = a.chars;
		char* temp2 = b.chars;

		char *temp3 = temp;
		char *temp4 = temp2;

		while (*temp != '\0') {

			sizeA++;
			temp++;

		}
		while (*temp2 != '\0') {

			sizeB++;
			temp2++;

		}

		result.chars = new char[sizeA + sizeB + 1];

		//Adding the 1st string
		for (int i = 0; i < sizeA; i++) {

			result.chars[counter] = temp3[i];
			counter++;
			
		}

		//Adding the second string
		for (int i = 0; i < sizeB; i++) {

			result.chars[counter] = temp4[i];
			counter++;

		}
		return result;

	}
	
	friend bool operator == (const Strin &a, const Strin &b) {

		const char* temp_a = a.chars;
		const char* temp_b = b.chars;

		const char* temp_a1 = temp_a;
		const char* temp_b1 = temp_b;

		int sizeA = 0;
		int sizeB = 0;

		//Get the size of the 1st
		while (*temp_a1 != '\0') {
			sizeA++;
			temp_a1++;
		}

		//Get the size of the 2nd
		while (*temp_b1 != '\0') {
			sizeB++;
			temp_b1++;
		}

		//Check if the two are the same
		while (*temp_a == '\0') {

			if (*temp_a != *temp_b)
				return false;
			else {
				temp_a++;
				temp_b++;
			}


		}

		//Check if the two have the same size
		if (sizeA == sizeB)
			return true;
		else
			return false;
	}

	int length() {

		int size = 0;
		char* temp = chars;

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

	void print() {

		int size = length();

		for (int i = 0; i < size; i++)
			std::cout << chars[i];

		std::cout << std::endl;
	}

	char* GetChars() {
		return chars;
	}

};