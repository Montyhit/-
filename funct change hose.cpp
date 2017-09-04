// Функция изменения данных рукава

#include <iostream>
#include "Funct.h"
#include "Hose.h"

extern std::list<Hose> hose_base;

// Константы категории рукавов
const enum category_hose { cat_1 = 1, cat_2, cat_3 };

void funct_hose_change(Hose *obj) 
{
	while (true)
	{
		std::cout << "Введите категорию рукава: ";
		int num = input_validat();
		if (cat_1 == num || cat_2 == num || cat_3 == num)
		{
			obj->category_hose = num;
			funct_delete(obj->get_num_hose());
			Hose tmp = obj;
			hose_base.push_back(obj);
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