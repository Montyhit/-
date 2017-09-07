// Перемещение рукава

#include <iostream>
#include <list>
#include "Funct.h"
#include "Singleton.h"

std::list<Hose> tmp_repository;

void shift_hose() 
{
	while (true)
	{
		std::cout << "0 - выход." << std::endl;
		std::cout << "Введите номера рукавов, которые нужно переместить:" << std::endl;
		while (true)
		{
			int num_hose = input_validat();
			if (num_hose == 0)
				break;

			if (!funct_search_bool(num_hose))
			{
				std::cout << "Рукав " << num_hose << " не найден" << std::endl;
				continue;
			}
			Hose tmp_hose = funct_search(num_hose);
			funct_delete(num_hose);
			tmp_repository.push_back(tmp_hose);
		}

		system("cls");
		std::cout << "0 - выход." << std::endl << std::endl;
		std::cout << "Куда переместить рукава?" << std::endl
			<< "1 - Рукавная база." << std::endl
			<< "2 - АЦ 2.5/50." << std::endl
			<< "3 - АЦ 5.0/50." << std::endl
			<< "4 - АБР." << std::endl
			<< "5 - АГДЗС." << std::endl
			<< "6 - АКТПЛ." << std::endl
			<< "7 - Ремонт." << std::endl
			<< "Введите пункт меню: ";

		int menu_item = input_validat();
		system("cls");

		switch (menu_item) 
		{
		case 1: 
			Hose_base::call()->splice(Hose_base::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены на рукавную базу" << std::endl;
			break;
		case 2: 
			AC_2_5::call()->splice(AC_2_5::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены на АЦ 2.5/50" << std::endl;
			break;
		case 3: 
			AC_5_0::call()->splice(AC_5_0::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены на АЦ 5.0/50" << std::endl;
			break;
		case 4: 
			ABR::call()->splice(ABR::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены на АБР" << std::endl;
			break;
		case 5: 
			AGDZS::call()->splice(AGDZS::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены на АГДЗС" << std::endl;
			break;
		case 6: 
			AKTPL::call()->splice(AKTPL::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены на АКТПЛ" << std::endl;
			break;
		case 7: 
			Repairs::call()->splice(Repairs::call()->end(), tmp_repository);
			std::cout << "Рукава перемещены в ремонт" << std::endl;
			break;
		}
		break;
	}
}