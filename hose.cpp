#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Funct.h"
#include "Hose.h"

// ��������� ��������� �������
enum category_hose { cat_1 = 1, cat_2, cat_3 };

// ��������� ��������� �������� �������
const enum diameter_hose { _38 = 38, _51 = 51, _66 = 66, _75 = 75, _77 = 77, _125 = 125, _150 = 150 };

// �������� ������
void Hose::create_hose()
{
	std::cout << "������� ����� ������: ";
	num_hose = input_validat();

	while (true)
	{
		std::cout << "������� ��������� ������: ";
		int num = input_validat();
		if (cat_1 == num || cat_2 == num || cat_3 == num)
		{
			category_hose = num;
			break;
		}
		else
		{
			std::cout << "�������� ��������� ������." << std::endl;
			continue;
		}
	}


	while (true)
	{
		std::cout << "������� ������� ������: ";
		int diametr = input_validat();

		if (_38 == diametr || _51 == diametr ||
			_66 == diametr || _75 == diametr ||
			_77 == diametr || _125 == diametr || _150 == diametr)
		{
			diameter_hose = diametr;
			break;
		}
		else
		{
			std::cout << "�������� ������� ������." << std::endl;
			continue;
		}
	}

	//std::cout << "������� ����� ������ ������, �����: ";
	//hose_job_h = search_input();

	//std::cout << "�����: ";
	//hose_job_m = search_input();
}

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

// ���������� ==
bool Hose::operator==(const Hose *obj)
{
	return num_hose == obj->num_hose ? true : false;
}
bool Hose::operator==(const int num_hose)
{
	return this->num_hose == num_hose ? true : false;
}

// ����� ������
void Hose::show_hose() {
	std::cout << std::endl;
	std::cout << "����� ������: " << num_hose << std::endl;
	std::cout << "��������� ������: " << category_hose << std::endl;
	std::cout << "������� ������: " << diameter_hose << std::endl;
	//std::cout << "����� ������ ������: " << hose_job_h << "�. " << hose_job_m << "�." << std::endl;
}