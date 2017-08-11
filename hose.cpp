#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
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
	std::cout << "Номер рукава: " << num_hose << std::endl;
	std::cout << "Категория рукава: " << category_hose << std::endl;
	std::cout << "Диаметр рукава: " << diameter_hose << std::endl;
	//std::cout << "Время работы рукава: " << hose_job_h << "ч. " << hose_job_m << "м." << std::endl;
}

// Изменение данных
void Hose::hose_change() {
	while (true)
	{
		std::cout << "Введите номер рукава: ";
		std::cin >> num_hose;
		if (!std::cin)	// Проверка на правильность ввода
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		break;
	}

	while (true)
	{
		std::cout << "Введите категорию рукава: ";
		std::cin >> category_hose;
		if (!std::cin)	// Проверка на правильность ввода
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		break;
	}
	
	while (true)
	{
		std::cout << "Введите диаметр рукава: ";
		std::cin >> diameter_hose;
		if (!std::cin)	// Проверка на правильность ввода
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
			std::cout << "Ошибка ввода!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		break;
	}
	
	//while (true)
	//{
	//	std::cout << "Введите время работы рукава, часов: ";
	//	std::cin >> hose_job_h;
	//	if (!std::cin)	// Проверка на правильность ввода
	//	{
	//		std::cin.clear();	// очистка потока cin
	//		while (std::cin.get() != '\n');

	//		system("cls");
	//		std::cout << "Ошибка ввода!" << std::endl;
	//		std::cout << std::endl;
	//		continue;
	//	}
	//	break;
	//}
	//
	//while (true)
	//{
	//	std::cout << "минут: ";
	//	std::cin >> hose_job_m;
	//	if (!std::cin)	// Проверка на правильность ввода
	//	{
	//		std::cin.clear();	// очистка потока cin
	//		while (std::cin.get() != '\n');

	//		system("cls");
	//		std::cout << "Ошибка ввода!" << std::endl;
	//		std::cout << std::endl;
	//		continue;
	//	}
	//	break;
	//}
}
