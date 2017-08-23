// Показывает количество рукавов

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void quantity_hose() {

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	std::cout << "Количество рукавов на рукавной базе = " << hose_base.size() << std::endl;
	std::cout << "Количество рукавов в ремонте = " << repairs.size() << std::endl;
	std::cout << "Количество рукавов на АКТПЛ = " << AKTPL.size() << std::endl;
	std::cout << "Количество рукавов на АЦ 2.5/50 = " << AC_2_5.size() << std::endl;
	std::cout << "Количество рукавов на АЦ 5.0/50 = " << AC_5_0.size() << std::endl;
	std::cout << "Количество рукавов на АГДЗС = " << AGDZS.size() << std::endl;
	std::cout << "Количество рукавов на АБР = " << ABR.size() << std::endl;
}