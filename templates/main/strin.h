#ifndef STRIN
#define STRIN

#include <vector>
#include <iostream>

class Strin {
	std::vector<char> chars; //use a const char*

public:

	Strin operator + (const Strin &s) {

		for (int i = 0; i < s.chars.size(); i++) {
			chars.push_back(s.chars[i]);
		}
		return *this;
	}

	Strin operator = (const char& s) {
		
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
	}

	Strin();
	Strin(const char*);
	Strin(const Strin& copy) : chars(copy.chars) { std::cout << "String created: "; for (int i = 0; i < chars.size(); ++i ){ std::cout << chars[i]; } std::cout << std::endl; };

	int length();
	void clear();


};

#endif STRIN