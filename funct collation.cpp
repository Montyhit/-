// Функция комплектовки
#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

extern std::list<Hose> hose_base;

void funct_collation(int quan_hose, int diameter_hose, std::list<Hose> *list)
{

	// Константы категории рукавов
	enum category_hose { cat_1 = 1, cat_2, cat_3 };

	std::list<Hose>::iterator iter = hose_base.begin();

	int test = cat_1;

	while (quan_hose)
	{
		switch (test)
		{
		case cat_1:
			if (iter == hose_base.end())
			{
				test = cat_2;
				iter = hose_base.begin();
			}

			if (iter->get_diameter_hose() == diameter_hose && 
				iter->get_category_hose() == cat_1)
			{
				list->splice(list->end(), hose_base, iter);
				quan_hose--;
				iter = hose_base.begin();	// Это нужно, так как во время работы splice, iter становится итератором list а не hose_base
			}
			break;
		case cat_2:
			if (iter == hose_base.end())
			{
				test = cat_3;
				iter = hose_base.begin();
			}

			if (iter->get_diameter_hose() == diameter_hose &&
				iter->get_category_hose() == cat_2)
			{
				list->splice(list->end(), hose_base, iter);
				quan_hose--;
				iter = hose_base.begin();
			}
			break;
		case cat_3:
			if (iter == hose_base.end())
			{
				std::cout << "На рукавной базе отсутствуют рукава диаметра " << diameter_hose << "мм." << std::endl;
			}

			if (iter->get_diameter_hose() == diameter_hose && 
				iter->get_category_hose() == cat_3)
			{
				list->splice(list->end(), hose_base, iter);
				quan_hose--;
				iter = hose_base.begin();
			}
			break;
		}
		iter++;
	}
}