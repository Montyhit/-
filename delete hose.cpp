// �������� ������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void del_hose() {

	std::cout << "������� ����� ������, ������� ����� �������: ";

	int num_hose = input_validat();

	if (hose_search_funct_bool(num_hose)) {
		_delete(num_hose);
		std::cout << "����� " << num_hose << " ������." << std::endl;
	}
	else {
		std::cout << "����� " << num_hose << " �� ������." << std::endl;
	}
}