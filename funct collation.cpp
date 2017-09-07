// Функция комплектовки

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void funct_collation(int quan_hose, int diameter_hose, std::list<Hose> *list)
{
	// Константы категории рукавов
	const extern enum category_hose { cat_1 = 1, cat_2, cat_3, EXIT = 0 };

	std::list<Hose>::iterator iter = Hose_base::call()->begin();

	int tmp_quan = quan_hose;

	int test = cat_1;

	while (quan_hose)
	{
		switch (test)
		{
		case cat_1:
			if (iter == Hose_base::call()->end())
			{
				test = cat_2;
				iter = Hose_base::call()->begin();
				break;
			}

			if (iter->get_diameter_hose() == diameter_hose && 
				iter->get_category_hose() == cat_1)
			{
				list->splice(list->end(), *Hose_base::call(), iter);
				quan_hose--;
				iter = Hose_base::call()->begin();	// Это нужно, так как во время работы splice, iter становится итератором list а не hose_base
			}
			break;
		case cat_2:
			if (iter == Hose_base::call()->end())
			{
				test = cat_3;
				iter = Hose_base::call()->begin();
				break;
			}

			if (iter->get_diameter_hose() == diameter_hose &&
				iter->get_category_hose() == cat_2)
			{
				list->splice(list->end(), *Hose_base::call(), iter);
				quan_hose--;
				iter = Hose_base::call()->begin();
			}
			break;
		case cat_3:
			if (iter == Hose_base::call()->end())
			{
				std::cout << "На рукавной базе отсутствуют рукава диаметра " << diameter_hose << "мм." << std::endl;
				test = EXIT;
				break;
			}

			if (iter->get_diameter_hose() == diameter_hose && 
				iter->get_category_hose() == cat_3)
			{
				list->splice(list->end(), *Hose_base::call(), iter);
				quan_hose--;
				iter = Hose_base::call()->begin();
			}
			break;
		}
		if (test == EXIT)
			break;
		iter++;
	}
}