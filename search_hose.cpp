// ����� ������

#include <iostream>
#include <list>
#include <typeinfo>
#include "Hose.h"
#include "Funct.h"

void search_hose() {

	while (true)
	{
		std::cout << "������� ����� ������, ������� ����� �����: ";
		
		int num_hose = input_validat();
		
		if (hose_search_funct_bool(num_hose)) {
			hose_search_funct(num_hose).show_hose();
		}
		else {
			std::cout << "����� " << num_hose << " �� ������." << std::endl;
		}
		break;
	}
}
