#include <vector>
#include <iostream>

class Strin {

private:
	char chars[];

public:

	friend Strin operator + (const Strin &s1, const Strin &s2) {

		Strin tmp;



		return tmp;

	}

	bool operator == (const Strin &s) {

		/*char* temp1 = chars;
		const char* temp2 = s.chars;

		while (*(temp2) != '\0') {

			std::cout << *temp1 << std::endl;


			temp1++;
			temp2++;


		}

		return true;*/
		return true;
	}

	Strin() {
		chars[0] = '\0';
	}

	Strin(const char* string) {

		char * temp = chars;

		//We modify directly the 'chars' array
		while (*temp++ = *string++) {

			//*(chars - 1) = *temp;

		}
	}

	Strin(const Strin& copy) {

		int size = copy.length() + 1;

		for (int i = 0; i < size; ++i) {
			chars[i] = copy.chars[i];
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