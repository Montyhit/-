// �������� ������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void del_hose() {

	while (true)
	{
		std::cout << "������� ����� ������, ������� ����� �������: ";
		
		int num_hose = input_validat();
		
		if (hose_search_funct_bool(num_hose)) {
			funct_del_hose(num_hose);
			std::cout << "����� " << num_hose << " ������." << std::endl;
		}
		else {
			std::cout << "����� " << num_hose << " �� ������." << std::endl;
		}
		break;
	}
}