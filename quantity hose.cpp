// ���������� ���������� �������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void quantity_hose()
{
	std::cout << "���������� ������� �� �������� ���� = " << Hose_base::call()->size() << std::endl;
	std::cout << "���������� ������� � ������� = " << Repairs::call()->size() << std::endl;
	std::cout << "���������� ������� �� ����� = " << AKTPL::call()->size() << std::endl;
	std::cout << "���������� ������� �� �� 2.5/50 = " << AC_2_5::call()->size() << std::endl;
	std::cout << "���������� ������� �� �� 5.0/50 = " << AC_5_0::call()->size() << std::endl;
	std::cout << "���������� ������� �� ����� = " << AGDZS::call()->size() << std::endl;
	std::cout << "���������� ������� �� ��� = " << ABR::call()->size() << std::endl;
}