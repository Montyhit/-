// Удаление рукава

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void del_hose() {

	std::cout << "Введите номер рукава, который нужно удалить: ";

	int num_hose = input_validat();

	if (funct_search_bool(num_hose)) {
		funct_delete(num_hose);
		std::cout << "Рукав " << num_hose << " удален." << std::endl;
	}
	else {
		std::cout << "Рукав " << num_hose << " не найден." << std::endl;
	}
}