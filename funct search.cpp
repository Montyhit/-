// Функция поиска рукава по всем местам хранения

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

Hose funct_search(int num_hose) 
{
	if (std::find(Hose_base::call()->begin(), Hose_base::call()->end(), num_hose) != Hose_base::call()->end())
		return *std::find(Hose_base::call()->begin(), Hose_base::call()->end(), num_hose);
	
	if (std::find(Repairs::call()->begin(), Repairs::call()->end(), num_hose) != Repairs::call()->end())
		return *std::find(Repairs::call()->begin(), Repairs::call()->end(), num_hose);

	if (std::find(AKTPL::call()->begin(), AKTPL::call()->end(), num_hose) != AKTPL::call()->end())
		return *std::find(AKTPL::call()->begin(), AKTPL::call()->end(), num_hose);
	
	if (std::find(AC_2_5::call()->begin(), AC_2_5::call()->end(), num_hose) != AC_2_5::call()->end())
		return *std::find(AC_2_5::call()->begin(), AC_2_5::call()->end(), num_hose);
	
	if (std::find(AC_5_0::call()->begin(), AC_5_0::call()->end(), num_hose) != AC_5_0::call()->end())
		return *std::find(AC_5_0::call()->begin(), AC_5_0::call()->end(), num_hose);
	
	if (std::find(AGDZS::call()->begin(), AGDZS::call()->end(), num_hose) != AGDZS::call()->end())
		return *std::find(AGDZS::call()->begin(), AGDZS::call()->end(), num_hose);

	if (std::find(ABR::call()->begin(), ABR::call()->end(), num_hose) != ABR::call()->end())
		return *std::find(ABR::call()->begin(), ABR::call()->end(), num_hose);
	
	return false;
}

bool funct_search_bool(int num_hose)
{
	if (std::find(Hose_base::call()->begin(), Hose_base::call()->end(), num_hose) != Hose_base::call()->end())
		return true;

	if (std::find(Repairs::call()->begin(), Repairs::call()->end(), num_hose) != Repairs::call()->end())
		return true;

	if (std::find(AKTPL::call()->begin(), AKTPL::call()->end(), num_hose) != AKTPL::call()->end())
		return true;

	if (std::find(AC_2_5::call()->begin(), AC_2_5::call()->end(), num_hose) != AC_2_5::call()->end())
		return true;

	if (std::find(AC_5_0::call()->begin(), AC_5_0::call()->end(), num_hose) != AC_5_0::call()->end())
		return true;

	if (std::find(AGDZS::call()->begin(), AGDZS::call()->end(), num_hose) != AGDZS::call()->end())
		return true;

	if (std::find(ABR::call()->begin(), ABR::call()->end(), num_hose) != ABR::call()->end())
		return true;

	return false;
}