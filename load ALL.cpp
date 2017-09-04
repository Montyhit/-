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

	funct_load("Hose base.DAT",	&hose_base);
	funct_load("Repairs.DAT",	&repairs);
	funct_load("AKTPL.DAT",		&AKTPL);
	funct_load("AC 2.5_50.DAT",	&AC_2_5);
	funct_load("AC 5.0_50.DAT",	&AC_5_0);
	funct_load("AGDZS.DAT",		&AGDZS);
	funct_load("ABR.DAT",		&ABR);

}
