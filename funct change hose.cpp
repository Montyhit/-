// Функция изменения данных рукава

#include <iostream>
#include "Funct.h"
#include "Hose.h"
#include "Singleton.h"

// Константы категории рукавов
const extern enum category_hose;

void funct_hose_change(Hose *obj) 
{
	while (true)
	{
		std::cout << "0 - выход." << std::endl << std::endl;
		std::cout << "Введите категорию рукава: ";
		int num = input_validat();

		system("cls");
		
		if (num == 0)
			break;

		if (cat_1 == num || cat_2 == num || cat_3 == num)
		{
			obj->category_hose = num;
			funct_delete(obj->get_num_hose());
			Hose tmp = obj;
			Hose_base::call()->push_back(obj);
			break;
		}
		else
		{
			std::cout << "Неверная категория рукава." << std::endl;
			continue;
		}
	}

	//std::cout << "Введите время работы рукава, часов: ";
	//obj->hose_job_h = search_input();

	//std::cout << "минут: ";
	//obj->hose_job_m = search_input();
}