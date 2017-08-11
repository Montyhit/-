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
		int num_hose;
		std::cin >> num_hose;

		// �������� �� ������������ �����
		if (!std::cin)
		{
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "������ �����!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		
		if (hose_search_funct_bool(num_hose)) {
			hose_search_funct(num_hose).show_hose();
		}
		else {
			std::cout << "����� " << num_hose << " �� ������." << std::endl;
		}
		break;
	}
}
