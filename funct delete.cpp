// функция удаления

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

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

void _delete(int num_hose) {

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	del(num_hose, &hose_base);
	del(num_hose, &repairs);
	del(num_hose, &AKTPL);
	del(num_hose, &AC_2_5);
	del(num_hose, &AC_5_0);
	del(num_hose, &AGDZS);
	del(num_hose, &ABR);
}