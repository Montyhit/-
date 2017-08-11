// Перемещение рукава

#include <iostream>
#include <list>
#include "Funct.h"

void shift_hose() {

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	while (true)
	{	
		std::cout << "Введите номер рукава, который нужно переместить: ";
		int num_hose;
		std::cin >> num_hose;

		// Проверка на правильность ввода
		if (!std::cin)
		{
			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');
			continue;
		}

		if (!hose_search_funct_bool(num_hose)) {
			std::cout << "Рукав " << num_hose << " не найден" << std::endl;
			break;
		}

		std::cout << "Куда переместить данный рукав?" << std::endl
			<< "1 - Рукавная база." << std::endl
			<< "2 - АЦ 2.5/50." << std::endl
			<< "3 - АЦ 5.0/50." << std::endl
			<< "4 - АБР." << std::endl
			<< "5 - АГДЗС." << std::endl
			<< "6 - АКТПЛ." << std::endl
			<< "7 - Ремонт." << std::endl
			<< "Введите пункт меню: ";

		int menu_item;
		std::cin >> menu_item;

		Hose a = hose_search_funct(num_hose);	// Присвоили новому объекту значение искомого рукава

		if (!std::cin)
		{
			std::cout << "Ошибка ввода!" << std::endl;
			std::cout << std::endl;
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');
			continue;
		}

		funct_del_hose(num_hose);	//	Удаление рукава из списка
		switch (menu_item) {
		case 1: {
			system("cls");
			hose_base.push_back(a);	// добавление созданного объекта в список
			std::cout << num_hose << " рукав добавлен на рукавную базу" << std::endl;
			break;
		}
		case 2: {
			system("cls");
			AC_2_5.push_back(a);
			std::cout << num_hose << " рукав добавлен на АЦ 2.5/50" << std::endl;
			break;
		}
		case 3: {
			system("cls");
			AC_5_0.push_back(a);
			std::cout << num_hose << " рукав добавлен на АЦ 5.0/50" << std::endl;
			break;
		}
		case 4: {
			system("cls");
			ABR.push_back(a);
			std::cout << num_hose << " рукав добавлен на АБР" << std::endl;
			break;
		}
		case 5: {
			system("cls");
			AGDZS.push_back(a);
			std::cout << num_hose << " рукав добавлен на АГДЗС" << std::endl;
			break;
		}
		case 6: {
			system("cls");
			AKTPL.push_back(a);
			std::cout << num_hose << " рукав добавлен на АКТПЛ" << std::endl;
			break;
		}
		case 7: {
			system("cls");
			repairs.push_back(a);
			std::cout << num_hose << " рукав добавлен в ремонт" << std::endl;
			break;
			}
		}
		break;
	}
}