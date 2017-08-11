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

	remove("Hose base.DAT");
	std::ofstream file_hose_base("Hose base.DAT", std::ios::app | std::ios::binary);
	for (auto f : hose_base)
	{
		file_hose_base.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_hose_base.close();

	remove("Repairs.DAT");
	std::ofstream file_repairs("Repairs.DAT", std::ios::app, std::ios::binary);
	for (auto f : repairs)
	{
		file_repairs.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_repairs.close();

	remove("AKTPL.DAT");
	std::ofstream file_AKTPL("AKTPL.DAT", std::ios::app, std::ios::binary);
	for (auto f : AKTPL)
	{
		file_AKTPL.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_AKTPL.close();

	remove("AC 2.5_50.DAT");
	std::ofstream file_AC_2_5("AC 2.5_50.DAT", std::ios::app, std::ios::binary);
	for (auto f : AC_2_5)
	{
		file_AC_2_5.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_AC_2_5.close();

	remove("AC 5.0_50.DAT");
	std::ofstream file_AC_5_0("AC 5.0_50.DAT", std::ios::app, std::ios::binary);
	for (auto f : AC_5_0)
	{
		file_AC_5_0.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_AC_5_0.close();

	remove("AGDZS.DAT");
	std::ofstream file_AGDZS("AGDZS.DAT", std::ios::app, std::ios::binary);
	for (auto f : AGDZS)
	{
		file_AGDZS.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_AGDZS.close();

	remove("ABR.DAT");
	std::ofstream file_ABR("ABR.DAT", std::ios::app, std::ios::binary);
	for (auto f : ABR)
	{
		file_ABR.write(reinterpret_cast<char*>(&f), sizeof(f));
	}
	file_ABR.close();

	std::cout << "Все данные записаны." << std::endl;

}
