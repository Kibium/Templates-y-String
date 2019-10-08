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

		chars = new char[size];


		for (int i = 0; i < size; i++) {

			chars[i] = temp2[i];

		}


		for (int i = 0; i < size; i++)
			std::cout << chars[i];
	};

	//Strings received correctly
	friend Strin operator + (const Strin &a, const Strin &b) {

		Strin s(" ");

		int sizeA = 0;
		int sizeB = 0;

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

		s.chars = new char[sizeA + sizeB - 1];

		for (int i = 0; i < sizeA + sizeB; i++) {

			//if (i < sizeA)
				//s.chars[i] = temp3[i];

			
		}

		std::cout << s.length() << std::endl;

		return s;

	}

	friend bool operator == (const Strin &a, const Strin &b) {



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