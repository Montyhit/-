// Показывает количество рукавов

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void quantity_hose()
{
	std::cout << "Количество рукавов на рукавной базе = " << Hose_base::call()->size() << std::endl;
	std::cout << "Количество рукавов в ремонте = " << Repairs::call()->size() << std::endl;
	std::cout << "Количество рукавов на АКТПЛ = " << AKTPL::call()->size() << std::endl;
	std::cout << "Количество рукавов на АЦ 2.5/50 = " << AC_2_5::call()->size() << std::endl;
	std::cout << "Количество рукавов на АЦ 5.0/50 = " << AC_5_0::call()->size() << std::endl;
	std::cout << "Количество рукавов на АГДЗС = " << AGDZS::call()->size() << std::endl;
	std::cout << "Количество рукавов на АБР = " << ABR::call()->size() << std::endl;
}