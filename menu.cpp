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
		std::cout << std::endl;
		std::cout << "������� ����� ����: ";

		int menu = input_validat();

		system("cls");

		switch (menu)
		{
		case 1:
			new_hose();
			break;
		case 2:
			shift_hose();
			break;
		case 3:
			change_hose();
			break;
		case 4:
			del_hose();
			break;
		case 5:
			search_hose();
			break;
		case 6:
			quantity_hose();
			break;
		case 7:
			show_hose();
			break;
		case 8:
			break;
		}
	}
}
