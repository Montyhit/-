// Удаление рукава

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void del_hose() {

	while (true)
	{
		std::cout << "Введите номер рукава, который нужно удалить: ";
		int num_hose;
		std::cin >> num_hose;

		if (!std::cin)	// Проверка на правильность ввода
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		
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