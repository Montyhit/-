// �������� ������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void del_hose() {

	std::cout << "������� ����� ������, ������� ����� �������: ";

	int num_hose = input_validat();

	if (funct_search_bool(num_hose)) {
		funct_delete(num_hose);
		std::cout << "����� " << num_hose << " ������." << std::endl;
	}
	else {
		std::cout << "����� " << num_hose << " �� ������." << std::endl;
	}
}