// �������� ������ � ���������� ��� �� �������� ����

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void new_hose() {
	extern std::list<Hose> hose_base;
	Hose a;
	a.hose_change();
	int num_hose = a.get_num_hose();
	
	if (!hose_search_funct_bool(num_hose)) {	// ���� ������� ������ ����� �� �������� true
		system("cls");
		std::cout << num_hose << " ����� ������� �� �������� ����." << std::endl;
		hose_base.push_back(a);
	}
	else {
		std::cout << "����� ����� ������ ��� ������������." << std::endl;	// ������� ����� ����� ������ � �������� �� ���
	}
}
