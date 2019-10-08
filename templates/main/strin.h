#include <vector>
#include <iostream>

class Strin {

private:
	char *chars;

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
	}

	bool operator == (const Strin &s) {

		bool equal = false;
		for (int i = 0; i < s.chars.size(); ++i) {
			if (chars[i] != s.chars[i])
				return false;
			else
				continue;
		}

		return true;
	}*/

	Strin() {};
	Strin(const char* word) {

		chars = nullptr;
		const char* w2 = word;

		//Length
		int size = 0;
		while (*w2 != '\0') {
			
			*chars = *w2;

			chars++;
			size++;

			w2++;
		}


		std::cout << size << std::endl;

		for (int i = 0; i < length(); ++i) {
			std::cout << chars[i];
		}

		std::cout << std::endl;

	}
//	Strin(const Strin& copy) : chars(copy.chars) { };

	int length() {

		int size = 0;

		if (chars != nullptr) {
			while (*chars != '\0') {
				size++;
				chars++;
			}
		}
		return size;

	}
	void clear();


};