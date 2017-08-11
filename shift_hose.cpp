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
		int num_hose;
		std::cin >> num_hose;

		// �������� �� ������������ �����
		if (!std::cin)
		{
			system("cls");
			std::cout << "������ �����!" << std::endl;
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');
			continue;
		}

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

		int menu_item;
		std::cin >> menu_item;

		Hose a = hose_search_funct(num_hose);	// ��������� ������ ������� �������� �������� ������

		if (!std::cin)
		{
			std::cout << "������ �����!" << std::endl;
			std::cout << std::endl;
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');
			continue;
		}

		funct_del_hose(num_hose);	//	�������� ������ �� ������
		switch (menu_item) {
		case 1: {
			system("cls");
			hose_base.push_back(a);	// ���������� ���������� ������� � ������
			std::cout << num_hose << " ����� �������� �� �������� ����" << std::endl;
			break;
		}
		case 2: {
			system("cls");
			AC_2_5.push_back(a);
			std::cout << num_hose << " ����� �������� �� �� 2.5/50" << std::endl;
			break;
		}
		case 3: {
			system("cls");
			AC_5_0.push_back(a);
			std::cout << num_hose << " ����� �������� �� �� 5.0/50" << std::endl;
			break;
		}
		case 4: {
			system("cls");
			ABR.push_back(a);
			std::cout << num_hose << " ����� �������� �� ���" << std::endl;
			break;
		}
		case 5: {
			system("cls");
			AGDZS.push_back(a);
			std::cout << num_hose << " ����� �������� �� �����" << std::endl;
			break;
		}
		case 6: {
			system("cls");
			AKTPL.push_back(a);
			std::cout << num_hose << " ����� �������� �� �����" << std::endl;
			break;
		}
		case 7: {
			system("cls");
			repairs.push_back(a);
			std::cout << num_hose << " ����� �������� � ������" << std::endl;
			break;
			}
		}
		break;
	}
}