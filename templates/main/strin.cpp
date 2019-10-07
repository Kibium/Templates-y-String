#include "strin.h"

Strin::Strin() {
	std::cout << "Inicialitzat nou string" << std::endl;

}

Strin::Strin(const char* word) {

	const char* w2 = word; //Al no saber resetejar un punter, he de crear una variable auxiliar.

	int size = 0;
	while (*w2 != '\0') {
		size++;
		w2++;
	}

	for (int i = 0; i < size; i++) {
		chars.push_back(word[i]);
	}


	for (int i = 0; i < chars.size(); i++) {
		std::cout << chars[i] ;
	}

	std::cout << std::endl;

}

int Strin::length() {

	return chars.size();
}

void Strin::clear() {
	chars.clear();
}