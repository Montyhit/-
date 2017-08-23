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
		
		int num_hose = input_validat();

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

		int menu_item = input_validat();

		Hose a = hose_search_funct(num_hose);	// Присвоили новому объекту значение искомого рукава

		system("cls");
		_delete(num_hose); 	//	Удаление рукава из списка
		switch (menu_item) {
		case 1: {
			hose_base.push_back(a);	// добавление созданного объекта в список
			std::cout << num_hose << " рукав добавлен на рукавную базу" << std::endl;
			break;
		}
		case 2: {
			AC_2_5.push_back(a);
			std::cout << num_hose << " рукав добавлен на АЦ 2.5/50" << std::endl;
			break;
		}
		case 3: {
			AC_5_0.push_back(a);
			std::cout << num_hose << " рукав добавлен на АЦ 5.0/50" << std::endl;
			break;
		}
		case 4: {
			ABR.push_back(a);
			std::cout << num_hose << " рукав добавлен на АБР" << std::endl;
			break;
		}
		case 5: {
			AGDZS.push_back(a);
			std::cout << num_hose << " рукав добавлен на АГДЗС" << std::endl;
			break;
		}
		case 6: {
			AKTPL.push_back(a);
			std::cout << num_hose << " рукав добавлен на АКТПЛ" << std::endl;
			break;
		}
		case 7: {
			repairs.push_back(a);
			std::cout << num_hose << " рукав добавлен в ремонт" << std::endl;
			break;
			}
		}
		break;
	}
}