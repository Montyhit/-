// Удаление рукава

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void del_hose() {

	while (true)
	{
		std::cout << "Введите номер рукава, который нужно удалить: ";
		
		int num_hose = input_validat();
		
		if (hose_search_funct_bool(num_hose)) {
			funct_del_hose(num_hose);
			std::cout << "Рукав " << num_hose << " удален." << std::endl;
		}
		else {
			std::cout << "Рукав " << num_hose << " не найден." << std::endl;
		}
		break;
	}
}