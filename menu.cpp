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
		int menu;
		std::cout << std::endl;
		std::cout << "Введите пункт меню: ";
		std::cin >> menu;
		
		// Проверка на правильность ввода
		if (!std::cin)	
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			continue;
		}

		if (menu == 1) {
			system("cls");
			new_hose();
		}
		else if (menu == 2) {
			system("cls");
			shift_hose();
		}
		else if (menu == 3) {
			system("cls");
			change_hose();
		}
		else if (menu == 4) {
			system("cls");
			del_hose();
		}
		else if (menu == 5) {
			system("cls");
			search_hose();
		}
		else if (menu == 6) {
			system("cls");
			quantity_hose();
		}
		else if (menu == 7) {
			system("cls");
			show_hose();
		}
		else if (menu == 8) {
			break;
		}
	}
}
