// Функция поиска рукава по всем местам хранения


// паттерн одночка
// класс занрузки  сохранения


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

Hose hose_search_funct(int& num_hose) {

	for (auto H : hose_base)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	for (auto H : repairs)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	for (auto H : AKTPL)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	for (auto H : AC_2_5)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	for (auto H : AC_5_0)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	for (auto H : AGDZS)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	for (auto H : ABR)
	{
		if (H.get_num_hose() == num_hose)
			return H;
	}
	return false;
}

bool hose_search_funct_bool(int& num_hose) {
	for (auto H : hose_base)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	for (auto H : repairs)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	for (auto H : AKTPL)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	for (auto H : AC_2_5)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	for (auto H : AC_5_0)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	for (auto H : AGDZS)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	for (auto H : ABR)
	{
		if (H.get_num_hose() == num_hose)
			return true;
	}
	return false;
}