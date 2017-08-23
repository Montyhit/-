#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Funct.h"
#include "Hose.h"

// Конструктор копирования
Hose::Hose(const Hose* obj) {
	this->num_hose = obj->num_hose;
	this->category_hose = obj->category_hose;
	this->diameter_hose = obj->diameter_hose;
	//this->hose_job_h = obj->hose_job_h;
	//this->hose_job_m = obj->hose_job_m;
}

// Перегрузка =
Hose Hose::operator=(const Hose* obj) {
	this->num_hose = obj->num_hose;
	this->category_hose = obj->category_hose;
	this->diameter_hose = obj->diameter_hose;
	//this->hose_job_h = obj->hose_job_h;
	//this->hose_job_m = obj->hose_job_m;
	return *this;
}

// Вывод данных
void Hose::show_hose() {
	std::cout << std::endl;
	std::cout << "Номер рукава: " << num_hose << std::endl;
	std::cout << "Категория рукава: " << category_hose << std::endl;
	std::cout << "Диаметр рукава: " << diameter_hose << std::endl;
	//std::cout << "Время работы рукава: " << hose_job_h << "ч. " << hose_job_m << "м." << std::endl;
}

// Изменение данных
void Hose::hose_change() {
	
	std::cout << "Введите номер рукава: ";
	num_hose = input_validat();

	std::cout << "Введите категорию рукава: ";
	category_hose = input_validat();

	std::cout << "Введите диаметр рукава: ";
	diameter_hose = input_validat();

	//std::cout << "Введите время работы рукава, часов: ";
	//hose_job_h = search_input();

	//std::cout << "минут: ";
	//hose_job_m = search_input();

}
