// Автоматическая разукомплектовка ПАСА

#include <iostream>
#include "Funct.h"
#include "Singleton.h"

void auto_transfer_hose()
{
	std::cout << "0 - выход." << std::endl << std::endl;
	std::cout << "Какой автомобиль разукоплектовать?" << std::endl
		<< "1 - АКТПЛ" << std::endl
		<< "2 - АЦ 2.5/50" << std::endl
		<< "3 - АЦ 5.0/50" << std::endl
		<< "4 - АГДЗС" << std::endl
		<< "5 - АБР" << std::endl;

	int menu = input_validat();

	system("cls");

	switch (menu)
	{
	case 1:
		Hose_base::call()->splice(Hose_base::call()->end(), *AKTPL::call());
		std::cout << "Все рукава с АКТПЛ перенесены на рукавную базу." << std::endl;
		break;
	case 2:
		Hose_base::call()->splice(Hose_base::call()->end(), *AC_2_5::call());
		std::cout << "Все рукава с АЦ 2.5/50 перенесены на рукавную базу." << std::endl;
		break;
	case 3:
		Hose_base::call()->splice(Hose_base::call()->end(), *AC_5_0::call());
		std::cout << "Все рукава с АЦ 5.0/50 перенесены на рукавную базу." << std::endl;
		break;
	case 4:
		Hose_base::call()->splice(Hose_base::call()->end(), *AGDZS::call());
		std::cout << "Все рукава с АГДЗС перенесены на рукавную базу." << std::endl;
		break;
	case 5:
		Hose_base::call()->splice(Hose_base::call()->end(), *ABR::call());
		std::cout << "Все рукава с АБР перенесены на рукавную базу." << std::endl;
		break;
	case 0:
		break;
	}
}