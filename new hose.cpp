// �������� ������ � ���������� ��� �� �������� ����

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void new_hose() {
	extern std::list<Hose> hose_base;
	Hose hose;
	hose.create_hose();

	if (!funct_search_bool(hose.get_num_hose())) {	// ���� ������� ������ ����� �� �������� true
		system("cls");
		std::cout << hose.get_num_hose() << " ����� ������� �� �������� ����." << std::endl;
		hose_base.push_back(hose);
	}
	else {
		std::cout << "����� ����� ������ ��� ������������." << std::endl;	// ������� ����� ����� ������ � �������� �� ���
	}
}

