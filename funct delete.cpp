// функция удаления

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void del(int num, std::list<Hose> *list)
{
	std::list<Hose>::iterator iter;
	for (iter = list->begin(); iter != list->end(); iter++)
	{
		if (iter->get_num_hose() == num)
		{
			list->erase(iter);
			break;
		}
	}
};

void funct_delete(int num_hose) 
{
	del(num_hose, Hose_base::call());
	del(num_hose, Repairs::call());
	del(num_hose, AKTPL::call());
	del(num_hose, AC_2_5::call());
	del(num_hose, AC_5_0::call());
	del(num_hose, AGDZS::call());
	del(num_hose, ABR::call());
}