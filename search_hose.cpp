// Поиск рукава

#include <iostream>
#include <list>
#include <typeinfo>
#include "Hose.h"
#include "Funct.h"

void search_hose() {

	while (true)
	{
		std::cout << "Введите номер рукава, который нужно найти: ";
		int num_hose;
		std::cin >> num_hose;

		// Проверка на правильность ввода
		if (!std::cin)
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		
		if (hose_search_funct_bool(num_hose)) {
			hose_search_funct(num_hose).show_hose();
		}
		else {
			std::cout << "Рукав " << num_hose << " не найден." << std::endl;
		}
		break;
	}
}
