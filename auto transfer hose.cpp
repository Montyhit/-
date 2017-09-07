// �������������� ���������������� ����

#include <iostream>
#include "Funct.h"
#include "Singleton.h"

void auto_transfer_hose()
{
	std::cout << "0 - �����." << std::endl << std::endl;
	std::cout << "����� ���������� ����������������?" << std::endl
		<< "1 - �����" << std::endl
		<< "2 - �� 2.5/50" << std::endl
		<< "3 - �� 5.0/50" << std::endl
		<< "4 - �����" << std::endl
		<< "5 - ���" << std::endl;

	int menu = input_validat();

	system("cls");

	switch (menu)
	{
	case 1:
		Hose_base::call()->splice(Hose_base::call()->end(), *AKTPL::call());
		std::cout << "��� ������ � ����� ���������� �� �������� ����." << std::endl;
		break;
	case 2:
		Hose_base::call()->splice(Hose_base::call()->end(), *AC_2_5::call());
		std::cout << "��� ������ � �� 2.5/50 ���������� �� �������� ����." << std::endl;
		break;
	case 3:
		Hose_base::call()->splice(Hose_base::call()->end(), *AC_5_0::call());
		std::cout << "��� ������ � �� 5.0/50 ���������� �� �������� ����." << std::endl;
		break;
	case 4:
		Hose_base::call()->splice(Hose_base::call()->end(), *AGDZS::call());
		std::cout << "��� ������ � ����� ���������� �� �������� ����." << std::endl;
		break;
	case 5:
		Hose_base::call()->splice(Hose_base::call()->end(), *ABR::call());
		std::cout << "��� ������ � ��� ���������� �� �������� ����." << std::endl;
		break;
	case 0:
		break;
	}
}