#include <iostream>
#include "Funct.h"

void menu() 
{
	bool exit = true;

	setlocale(LC_ALL, "Rus");

	while (exit) 
	{
		std::cout << std::endl;
		std::cout << "1 - новый рукав." << std::endl;
		std::cout << "2 - переместить рукав." << std::endl;
		std::cout << "3 - автоматически укомплектовать ПАСА рукавами." << std::endl;
		std::cout << "4 - автоматическая разукомплектовка ПАСА." << std::endl;
		std::cout << "5 - изменить данные о рукаве." << std::endl;
		std::cout << "6 - удалить рукав." << std::endl;
		std::cout << "7 - поиск рукава." << std::endl;
		std::cout << "8 - количество рукавов." << std::endl;
		std::cout << "9 - показать рукава." << std::endl;
		std::cout << "0 - сохранить и выйти." << std::endl;
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
			auto_collation();
			break;
		case 4:
			auto_transfer_hose();
			break;
		case 5:
			change_hose();
			break;
		case 6:
			del_hose();
			break;
		case 7:
			search_hose();
			break;
		case 8:
			quantity_hose();
			break;
		case 9:
			show_hose();
			break;
		case 0:
			exit = false;
			break;
		}
	}
}
