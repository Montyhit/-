// ��������� ������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void change_hose() {

	extern std::list<Hose> hose_base;
	while (true)
	{
		system("cls");
		std::cout << "������� ����� ������, ������� ����� ��������: ";
		int num_hose = input_validat();

		if (funct_search_bool(num_hose)) 
		{
			funct_hose_change(&funct_search(num_hose));
			std::cout << "����� " << num_hose << " ������� � �������� �� �������� ����." << std::endl;
		}
		else
		{
			system("cls");
			std::cout << "����� " << num_hose << " �� ������." << std::endl;
		}
		break;
	}
}