// �������� ������ � ���������� ��� �� �������� ����

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void new_hose() 
{
	Hose hose;
	hose.create_hose();

	system("cls");
	if (!funct_search_bool(hose.get_num_hose()))	// ���� ������� ������ ����� �� �������� true
	{	
		std::cout << hose.get_num_hose() << " ����� ������� �� �������� ����." << std::endl;
		Hose_base::call()->push_back(hose);
	}
	else 
	{
		std::cout << "����� ����� ������ ��� ������������." << std::endl;	// ������� ����� ����� ������ � �������� �� ���
	}
}

