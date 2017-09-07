// Сохранение всех рукавов

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void save_ALL()
{
	setlocale(LC_ALL, "Rus");

	funct_save("Hose base.DAT", Hose_base::call());
	funct_save("Repairs.DAT", Repairs::call());
	funct_save("AKTPL.DAT", AKTPL::call());
	funct_save("AC 2.5_50.DAT", AC_2_5::call());
	funct_save("AC 5.0_50.DAT", AC_5_0::call());
	funct_save("AGDZS.DAT", AGDZS::call());
	funct_save("ABR.DAT", ABR::call());

	std::cout << "Все данные записаны." << std::endl;
}