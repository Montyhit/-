// ��������� ������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void change_hose() 
{
	while (true)
	{
		system("cls");
		std::cout << "0 - �����." << std::endl << std::endl;
		std::cout << "������� ����� ������, ������� ����� ��������: ";
		int num_hose = input_validat();

		system("cls");

		if (num_hose == 0)
			break;

		if (funct_search_bool(num_hose)) 
		{
			funct_hose_change(&funct_search(num_hose));
			std::cout << "����� " << num_hose << " ������� � �������� �� �������� ����." << std::endl;
		}
		else
		{
			std::cout << "����� " << num_hose << " �� ������." << std::endl;
		}
		break;
	}
}