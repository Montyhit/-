// ����������� ������

#include <iostream>
#include <list>
#include "Funct.h"

void shift_hose() {

	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	while (true)
	{	
		std::cout << "������� ����� ������, ������� ����� �����������: ";
		
		int num_hose = input_validat();

		if (!hose_search_funct_bool(num_hose)) {
			std::cout << "����� " << num_hose << " �� ������" << std::endl;
			break;
		}

		std::cout << "���� ����������� ������ �����?" << std::endl
			<< "1 - �������� ����." << std::endl
			<< "2 - �� 2.5/50." << std::endl
			<< "3 - �� 5.0/50." << std::endl
			<< "4 - ���." << std::endl
			<< "5 - �����." << std::endl
			<< "6 - �����." << std::endl
			<< "7 - ������." << std::endl
			<< "������� ����� ����: ";

		int menu_item = input_validat();

		Hose a = hose_search_funct(num_hose);	// ��������� ������ ������� �������� �������� ������

		system("cls");
		_delete(num_hose); 	//	�������� ������ �� ������
		switch (menu_item) {
		case 1: {
			hose_base.push_back(a);	// ���������� ���������� ������� � ������
			std::cout << num_hose << " ����� �������� �� �������� ����" << std::endl;
			break;
		}
		case 2: {
			AC_2_5.push_back(a);
			std::cout << num_hose << " ����� �������� �� �� 2.5/50" << std::endl;
			break;
		}
		case 3: {
			AC_5_0.push_back(a);
			std::cout << num_hose << " ����� �������� �� �� 5.0/50" << std::endl;
			break;
		}
		case 4: {
			ABR.push_back(a);
			std::cout << num_hose << " ����� �������� �� ���" << std::endl;
			break;
		}
		case 5: {
			AGDZS.push_back(a);
			std::cout << num_hose << " ����� �������� �� �����" << std::endl;
			break;
		}
		case 6: {
			AKTPL.push_back(a);
			std::cout << num_hose << " ����� �������� �� �����" << std::endl;
			break;
		}
		case 7: {
			repairs.push_back(a);
			std::cout << num_hose << " ����� �������� � ������" << std::endl;
			break;
			}
		}
		break;
	}
}