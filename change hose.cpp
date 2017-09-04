// Изменение рукава

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void change_hose() {

	extern std::list<Hose> hose_base;
	while (true)
	{
		system("cls");
		std::cout << "Введите номер рукава, который нужно изменить: ";
		int num_hose = input_validat();

		if (funct_search_bool(num_hose)) 
		{
			funct_hose_change(&funct_search(num_hose));
			std::cout << "Рукав " << num_hose << " изменен и добавлен на рукавную базу." << std::endl;
		}
		else
		{
			system("cls");
			std::cout << "Рукав " << num_hose << " не найден." << std::endl;
		}
		break;
	}
}