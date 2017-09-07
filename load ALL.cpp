// Загрузка всех данных из файла в программу

#include <fstream>
#include <iostream>
#include <list>
#include <cstdio>
#include "Funct.h"
#include "Singleton.h"

void load_ALL()
{
	setlocale(LC_ALL, "Rus");
	funct_load("Hose base.DAT",	Hose_base::call());
	funct_load("Repairs.DAT",	Repairs::call());
	funct_load("AKTPL.DAT",		AKTPL::call());
	funct_load("AC 2.5_50.DAT",	AC_2_5::call());
	funct_load("AC 5.0_50.DAT",	AC_5_0::call());
	funct_load("AGDZS.DAT",		AGDZS::call());
	funct_load("ABR.DAT",		ABR::call());
}
