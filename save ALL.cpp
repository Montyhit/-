// Сохранение всех рукавов

#include <fstream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void save_ALL()
{
	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	funct_save("Hose base.DAT", &hose_base);
	funct_save("Repairs.DAT", &repairs);
	funct_save("AKTPL.DAT", &AKTPL);
	funct_save("AC 2.5_50.DAT", &AC_2_5);
	funct_save("AC 5.0_50.DAT", &AC_5_0);
	funct_save("AGDZS.DAT", &AGDZS);
	funct_save("ABR.DAT", &ABR);

	std::cout << "Все данные записаны." << std::endl;

}

