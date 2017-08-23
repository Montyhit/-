// ���������� ���������� � �������

#include <iostream>
#include "Funct.h"
#include "Hose.h"

void show_hose()
{
	setlocale(LC_ALL, "Rus");

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	int menu;

	while (true)
	{
		std::cout << "��� �������� ������?" << std::endl
			<< "1 - �������� ����." << std::endl
			<< "2 - �� 2.5/50." << std::endl
			<< "3 - �� 5.0/50." << std::endl
			<< "4 - ���." << std::endl
			<< "5 - �����." << std::endl
			<< "6 - �����." << std::endl
			<< "7 - ������." << std::endl
			<< "������� ����� ����: ";

		menu = input_validat();
		break;
	}

	system("cls");

	switch (menu)
	{
	case 1:
		for (auto hose : hose_base)
			hose.show_hose();
		break;
	case 2:
		for (auto hose : AC_2_5)
			hose.show_hose();
		break;
	case 3:
		for (auto hose : AC_5_0)
			hose.show_hose();
		break;
	case 4:
		for (auto hose : ABR)
			hose.show_hose();
		break;
	case 5:
		for (auto hose : AGDZS)
			hose.show_hose();
		break;
	case 6:
		for (auto hose : AKTPL)
			hose.show_hose();
		break;
	case 7:
		for (auto hose : repairs)
			hose.show_hose();
		break;
	}
}