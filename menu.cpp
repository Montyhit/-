#include <iostream>
#include "Funct.h"

void program() {

	setlocale(LC_ALL, "Rus");

	while (true) {
		std::cout << std::endl;
		std::cout << "1 - ����� �����." << std::endl;
		std::cout << "2 - ����������� �����." << std::endl;
		std::cout << "3 - �������� ������ � ������." << std::endl;
		std::cout << "4 - ������� �����." << std::endl;
		std::cout << "5 - ����� ������." << std::endl;
		std::cout << "6 - ���������� �������." << std::endl;
		std::cout << "7 - �������� ������." << std::endl;
		std::cout << "8 - ��������� � �����." << std::endl;
		int menu;
		std::cout << std::endl;
		std::cout << "������� ����� ����: ";
		std::cin >> menu;
		
		// �������� �� ������������ �����
		if (!std::cin)	
		{
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "������ �����!" << std::endl;
			continue;
		}

		if (menu == 1) {
			system("cls");
			new_hose();
		}
		else if (menu == 2) {
			system("cls");
			shift_hose();
		}
		else if (menu == 3) {
			system("cls");
			change_hose();
		}
		else if (menu == 4) {
			system("cls");
			del_hose();
		}
		else if (menu == 5) {
			system("cls");
			search_hose();
		}
		else if (menu == 6) {
			system("cls");
			quantity_hose();
		}
		else if (menu == 7) {
			system("cls");
			show_hose();
		}
		else if (menu == 8) {
			break;
		}
	}
}
