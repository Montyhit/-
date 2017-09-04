// Автоматическая комплектова ПАСА рукавами

#include <iostream>
#include <list>
#include "Funct.h"
#include "Hose.h"

extern std::list<Hose> hose_base;
extern std::list<Hose> repairs;
extern std::list<Hose> AKTPL;
extern std::list<Hose> AC_2_5;
extern std::list<Hose> AC_5_0;
extern std::list<Hose> AGDZS;
extern std::list<Hose> ABR;

// Константы рукавов на пожарных машинах
const int quan_51 = 6;	
const int quan_66 = 6;
const int quan_77 = 12;
const int quan_75 = 2;
const int quan_125 = 2;
const int quan_AGDZS_66 = 2;
const int quan_ABR_51 = 4;
const int quan_AKTPL_66 = 2;

// Константы диаметров пожарных рукавов
const enum diameter_hose { _38 = 38, _51 = 51, _66 = 66, _75 = 75, _77 = 77, _125 = 125, _150 = 150 };

void auto_collation()
{
	std::cout << "Какой автомобль укомплектовать?" << std::endl
		<< "1 - АКТПЛ" << std::endl
		<< "2 - АЦ 2.5/50" << std::endl
		<< "3 - АЦ 5.0/50" << std::endl
		<< "4 - АГДЗС" << std::endl
		<< "5 - АБР" << std::endl
		<< "0 - Выход" << std::endl;

	int menu = input_validat();

	switch (menu)
	{
	case 1:
		funct_collation(quan_AKTPL_66, _66, &AKTPL);
		break;
	case 2:
		funct_collation(quan_51, _51, &AC_2_5);
		funct_collation(quan_66, _66, &AC_2_5);
		funct_collation(quan_77, _77, &AC_2_5);
		funct_collation(quan_75, _75, &AC_2_5);
		funct_collation(quan_125, _125, &AC_2_5);
		break;
	case 3:
		funct_collation(quan_51, _51, &AC_5_0);
		funct_collation(quan_66, _66, &AC_5_0);
		funct_collation(quan_77, _77, &AC_5_0);
		funct_collation(quan_75, _75, &AC_5_0);
		funct_collation(quan_125, _125, &AC_5_0);
		break;
	case 4:
		funct_collation(quan_AGDZS_66, _66, &AGDZS);
		break;
	case 5:
		funct_collation(quan_ABR_51, _51, &ABR);
		break;
	default:
		break;
	}
}