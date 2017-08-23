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

	save("Hose base.DAT", hose_base);
	save("Repairs.DAT", repairs);
	save("AKTPL.DAT", AKTPL);
	save("AC 2.5_50.DAT", AC_2_5);
	save("AC 5.0_50.DAT", AC_5_0);
	save("AGDZS.DAT", AGDZS);
	save("ABR.DAT", ABR);

	std::cout << "Все данные записаны." << std::endl;

}
