// Функция поиска рукава по всем местам хранения

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

std::list<Hose> hose_base;
std::list<Hose> repairs;
std::list<Hose> AKTPL;
std::list<Hose> AC_2_5;
std::list<Hose> AC_5_0;
std::list<Hose> AGDZS;
std::list<Hose> ABR;

Hose funct_search(int num_hose) 
{
	if (std::find(hose_base.begin(), hose_base.end(), num_hose) != hose_base.end())
		return *std::find(hose_base.begin(), hose_base.end(), num_hose);
	
	if (std::find(repairs.begin(), repairs.end(), num_hose) != repairs.end())
		return *std::find(repairs.begin(), repairs.end(), num_hose);

	if (std::find(AKTPL.begin(), AKTPL.end(), num_hose) != AKTPL.end())
		return *std::find(AKTPL.begin(), AKTPL.end(), num_hose);
	
	if (std::find(AC_2_5.begin(), AC_2_5.end(), num_hose) != AC_2_5.end())
		return *std::find(AC_2_5.begin(), AC_2_5.end(), num_hose);
	
	if (std::find(AC_5_0.begin(), AC_5_0.end(), num_hose) != AC_5_0.end())
		return *std::find(AC_5_0.begin(), AC_5_0.end(), num_hose);
	
	if (std::find(AGDZS.begin(), AGDZS.end(), num_hose) != AGDZS.end())
		return *std::find(AGDZS.begin(), AGDZS.end(), num_hose);

	if (std::find(ABR.begin(), ABR.end(), num_hose) != ABR.end())
		return *std::find(ABR.begin(), ABR.end(), num_hose);
	
	return false;
}

bool funct_search_bool(int num_hose)
{
	if (std::find(hose_base.begin(), hose_base.end(), num_hose) != hose_base.end())
		return true;

	if (std::find(repairs.begin(), repairs.end(), num_hose) != repairs.end())
		return true;

	if (std::find(AKTPL.begin(), AKTPL.end(), num_hose) != AKTPL.end())
		return true;

	if (std::find(AC_2_5.begin(), AC_2_5.end(), num_hose) != AC_2_5.end())
		return true;

	if (std::find(AC_5_0.begin(), AC_5_0.end(), num_hose) != AC_5_0.end())
		return true;

	if (std::find(AGDZS.begin(), AGDZS.end(), num_hose) != AGDZS.end())
		return true;

	if (std::find(ABR.begin(), ABR.end(), num_hose) != ABR.end())
		return true;

	return false;
}