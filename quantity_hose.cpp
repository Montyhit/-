// ���������� ���������� �������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void quantity_hose() {

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	std::cout << "���������� ������� �� �������� ���� = " << hose_base.size() << std::endl;
	std::cout << "���������� ������� � ������� = " << repairs.size() << std::endl;
	std::cout << "���������� ������� �� ����� = " << AKTPL.size() << std::endl;
	std::cout << "���������� ������� �� �� 2.5/50 = " << AC_2_5.size() << std::endl;
	std::cout << "���������� ������� �� �� 5.0/50 = " << AC_5_0.size() << std::endl;
	std::cout << "���������� ������� �� ����� = " << AGDZS.size() << std::endl;
	std::cout << "���������� ������� �� ��� = " << ABR.size() << std::endl;
}