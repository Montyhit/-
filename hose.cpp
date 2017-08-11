#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Hose.h"

// ����������� �����������
Hose::Hose(const Hose* obj) {
	this->num_hose = obj->num_hose;
	this->category_hose = obj->category_hose;
	this->diameter_hose = obj->diameter_hose;
	//this->hose_job_h = obj->hose_job_h;
	//this->hose_job_m = obj->hose_job_m;
}

// ���������� =
Hose Hose::operator=(const Hose* obj) {
	this->num_hose = obj->num_hose;
	this->category_hose = obj->category_hose;
	this->diameter_hose = obj->diameter_hose;
	//this->hose_job_h = obj->hose_job_h;
	//this->hose_job_m = obj->hose_job_m;
	return *this;
}

// ����� ������
void Hose::show_hose() {
	std::cout << "����� ������: " << num_hose << std::endl;
	std::cout << "��������� ������: " << category_hose << std::endl;
	std::cout << "������� ������: " << diameter_hose << std::endl;
	//std::cout << "����� ������ ������: " << hose_job_h << "�. " << hose_job_m << "�." << std::endl;
}

// ��������� ������
void Hose::hose_change() {
	while (true)
	{
		std::cout << "������� ����� ������: ";
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
		break;
	}

	while (true)
	{
		std::cout << "������� ��������� ������: ";
		std::cin >> category_hose;
		if (!std::cin)	// �������� �� ������������ �����
		{
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "������ �����!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		break;
	}
	
	while (true)
	{
		std::cout << "������� ������� ������: ";
		std::cin >> diameter_hose;
		if (!std::cin)	// �������� �� ������������ �����
		{
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "������ �����!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		break;
	}
	
	//while (true)
	//{
	//	std::cout << "������� ����� ������ ������, �����: ";
	//	std::cin >> hose_job_h;
	//	if (!std::cin)	// �������� �� ������������ �����
	//	{
	//		std::cin.clear();	// ������� ������ cin
	//		while (std::cin.get() != '\n');

	//		system("cls");
	//		std::cout << "������ �����!" << std::endl;
	//		std::cout << std::endl;
	//		continue;
	//	}
	//	break;
	//}
	//
	//while (true)
	//{
	//	std::cout << "�����: ";
	//	std::cin >> hose_job_m;
	//	if (!std::cin)	// �������� �� ������������ �����
	//	{
	//		std::cin.clear();	// ������� ������ cin
	//		while (std::cin.get() != '\n');

	//		system("cls");
	//		std::cout << "������ �����!" << std::endl;
	//		std::cout << std::endl;
	//		continue;
	//	}
	//	break;
	//}
}
