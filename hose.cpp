#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Funct.h"
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
	std::cout << std::endl;
	std::cout << "����� ������: " << num_hose << std::endl;
	std::cout << "��������� ������: " << category_hose << std::endl;
	std::cout << "������� ������: " << diameter_hose << std::endl;
	//std::cout << "����� ������ ������: " << hose_job_h << "�. " << hose_job_m << "�." << std::endl;
}

// ��������� ������
void Hose::hose_change() {
	
	std::cout << "������� ����� ������: ";
	num_hose = input_validat();

	std::cout << "������� ��������� ������: ";
	category_hose = input_validat();

	std::cout << "������� ������� ������: ";
	diameter_hose = input_validat();

	//std::cout << "������� ����� ������ ������, �����: ";
	//hose_job_h = search_input();

	//std::cout << "�����: ";
	//hose_job_m = search_input();

}
