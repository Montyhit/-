//Показывает информацию о рукавах

#include <iostream>
#include "Funct.h"
#include "Hose.h"
#include "Singleton.h"

void show_hose()
{
	setlocale(LC_ALL, "Rus");
	
	int menu;
	while (true)
	{
		std::cout << "0 - выход." << std::endl << std::endl;
		std::cout << "Где показать рукава?" << std::endl
			<< "1 - Рукавная база." << std::endl
			<< "2 - АЦ 2.5/50." << std::endl
			<< "3 - АЦ 5.0/50." << std::endl
			<< "4 - АБР." << std::endl
			<< "5 - АГДЗС." << std::endl
			<< "6 - АКТПЛ." << std::endl
			<< "7 - Ремонт." << std::endl
			<< "Введите пункт меню: ";

		menu = input_validat();
		break;
	}

	system("cls");

	switch (menu)
	{
	case 1:
		for (auto hose = Hose_base::call()->begin(); hose != Hose_base::call()->end(); hose++)
			hose->show_hose();
		break;
	case 2:
		for (auto hose = AC_2_5::call()->begin(); hose != AC_2_5::call()->end(); hose++)
			hose->show_hose();
		break;
	case 3:
		for (auto hose = AC_5_0::call()->begin(); hose != AC_5_0::call()->end(); hose++)
			hose->show_hose();
		break;
	case 4:
		for (auto hose = ABR::call()->begin(); hose != ABR::call()->end(); hose++)
			hose->show_hose();
		break;
	case 5:
		for (auto hose = AGDZS::call()->begin(); hose != AGDZS::call()->end(); hose++)
			hose->show_hose();
		break;
	case 6:
		for (auto hose = AKTPL::call()->begin(); hose != AKTPL::call()->end(); hose++)
			hose->show_hose();
		break;
	case 7:
		for (auto hose = Repairs::call()->begin(); hose != Repairs::call()->end(); hose++)
			hose->show_hose();
		break;
	default:
		break;
	}
}