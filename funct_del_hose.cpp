// функция поиска и удаления рукава

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

int funct_del_hose(int num_hose) {

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	std::list<Hose>::iterator iter;

	while (hose_search_funct_bool(num_hose)) {
		//Поиск и удаление на рукавной базе
		for (iter = hose_base.begin(); iter != hose_base.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				hose_base.erase(iter);
				return 0;
			}
		}
		//Поиск и удаление в ремонте
		for (iter = repairs.begin(); iter != repairs.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				repairs.erase(iter);
				return 0;
			}
		}
		// Поиск и удаление на АКТПЛ
		for (iter = AKTPL.begin(); iter != AKTPL.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				AKTPL.erase(iter);
				return 0;
			}
		}
		// Поиск и удаление на АЦ 2.5/50
		for (iter = AC_2_5.begin(); iter != AC_2_5.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				AC_2_5.erase(iter);
				return 0;
			}
		}
		// Поиск и удаление на AC_5_0
		for (iter = AC_5_0.begin(); iter != AC_5_0.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				AC_5_0.erase(iter);
				return 0;
			}
		}
		// Поиск и удаление на AGDZS
		for (iter = AGDZS.begin(); iter != AGDZS.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				AGDZS.erase(iter);
				return 0;
			}
		}
		// Поиск и удаление на ABR
		for (iter = ABR.begin(); iter != ABR.end(); iter++) {
			if ((*iter).get_num_hose() == num_hose) {
				ABR.erase(iter);
				return 0;
			}
		}
	}
	return false;
}