// Загрузка всех данных из файла в программу

#include <fstream>
#include <iostream>
#include <list>
#include <cstdio>
#include "Funct.h"

void load_ALL()
{
	setlocale(LC_ALL, "rus");
	
	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	load("Hose base.DAT", &hose_base);
	load("Repairs.DAT", &repairs);
	load("AKTPL.DAT", &AKTPL);
	load("AC 2.5_50.DAT", &AC_2_5);
	load("AC 5.0_50.DAT", &AC_5_0);
	load("AGDZS.DAT", &AGDZS);
	load("ABR.DAT", &ABR);

}
