#include <iostream>
#include "Funct.h"

void program() {

	setlocale(LC_ALL, "Rus");

	while (true) {
		std::cout << std::endl;
		std::cout << "1 - новый рукав." << std::endl;
		std::cout << "2 - переместить рукав." << std::endl;
		std::cout << "3 - изменить данные о рукаве." << std::endl;
		std::cout << "4 - удалить рукав." << std::endl;
		std::cout << "5 - поиск рукава." << std::endl;
		std::cout << "6 - количество рукавов." << std::endl;
		std::cout << "7 - показать рукава." << std::endl;
		std::cout << "8 - сохранить и выйти." << std::endl;
		std::cout << std::endl;
		std::cout << "Введите пункт меню: ";

		int menu = input_validat();

		system("cls");

		switch (menu)
		{
		case 1:
			new_hose();
			break;
		case 2:
			shift_hose();
			break;
		case 3:
			change_hose();
			break;
		case 4:
			del_hose();
			break;
		case 5:
			search_hose();
			break;
		case 6:
			quantity_hose();
			break;
		case 7:
			show_hose();
			break;
		case 8:
			break;
		}
	}
}
