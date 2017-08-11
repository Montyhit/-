// ��������� ������

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void change_hose() {

	extern std::list<Hose> hose_base;
	while (true)
	{
		std::cout << "������� ����� ������, ������� ����� ��������: ";
		int num_hose;
		std::cin >> num_hose;

		if (!std::cin)	// �������� �� ������������ �����
		{
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "������ �����!" << std::endl;
			std::cout << std::endl;
			continue;
		}

		if (hose_search_funct_bool(num_hose)) {
			Hose tmp_obj(hose_search_funct(num_hose));
			tmp_obj.hose_change();
			funct_del_hose(num_hose);
			hose_base.push_back(tmp_obj);
			system("cls");
			std::cout << "����� ������� � �������� �� �������� ����." << std::endl;
		}
		else {
			system("cls");
			std::cout << "����� " << num_hose << " �� ������." << std::endl;
		}
		break;
	}
}