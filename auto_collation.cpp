// Автоматическая комплектова ПАСА рукавами

#include <iostream>
#include <list>
#include <algorithm>
#include "Funct.h"
#include "Hose.h"
#include "Singleton.h"

// Количество рукавов на пожарных машинах
const int quan_51 = 6;	
const int quan_66 = 6;
const int quan_77 = 12;
const int quan_75 = 2;
const int quan_125 = 2;
const int quan_AGDZS_66 = 2;
const int quan_ABR_51 = 4;
const int quan_AKTPL_66 = 2;

// Константы диаметров пожарных рукавов
const extern enum diameter_hose;

// Подсчет количества рукавов на ПАСА по диаметру
int funct_quan_hose(std::list<Hose> *list, int diameter_hose);

void auto_collation()
{
	std::cout << "0 - выход." << std::endl << std::endl;
	std::cout << "Какой автомобль укомплектовать?" << std::endl
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
		funct_collation(quan_AKTPL_66 - funct_quan_hose(AKTPL::call(), _66), _66, AKTPL::call());
		break;
	case 2:
		funct_collation(quan_51 - funct_quan_hose(AC_2_5::call(), _51), _51, AC_2_5::call());
		funct_collation(quan_66 - funct_quan_hose(AC_2_5::call(), _66), _66, AC_2_5::call());
		funct_collation(quan_77 - funct_quan_hose(AC_2_5::call(), _77), _77, AC_2_5::call());
		funct_collation(quan_75 - funct_quan_hose(AC_2_5::call(), _75), _75, AC_2_5::call());
		funct_collation(quan_125 - funct_quan_hose(AC_2_5::call(), _125), _125, AC_2_5::call());
		break;
	case 3:
		funct_collation(quan_51 - funct_quan_hose(AC_5_0::call(), _51), _51, AC_5_0::call());
		funct_collation(quan_66 - funct_quan_hose(AC_5_0::call(), _66), _66, AC_5_0::call());
		funct_collation(quan_77 - funct_quan_hose(AC_5_0::call(), _77), _77, AC_5_0::call());
		funct_collation(quan_75 - funct_quan_hose(AC_5_0::call(), _75), _75, AC_5_0::call());
		funct_collation(quan_125 - funct_quan_hose(AC_5_0::call(), _125), _125, AC_5_0::call());
		break;
	case 4:
		funct_collation(quan_AGDZS_66 - funct_quan_hose(AGDZS::call(), _66), _66, AGDZS::call());
		break;
	case 5:
		funct_collation(quan_ABR_51 - funct_quan_hose(ABR::call(), _51), _51, ABR::call());
		break;
	default:
		break;
	}
}

int funct_quan_hose(std::list<Hose> *list, int diameter_hose)
{
	std::list<Hose>::iterator iter = list->begin();
	int num = 0;
	for (auto tmp = list->begin(); tmp != list->end(); tmp++)
	{
		if (iter->diam(diameter_hose))
			num++;
	}
	return num;
}