// ������� ��������� ������ ������

#include <iostream>
#include "Funct.h"
#include "Hose.h"

extern std::list<Hose> hose_base;

// ��������� ��������� �������
const enum category_hose { cat_1 = 1, cat_2, cat_3 };

void funct_hose_change(Hose *obj) 
{
	while (true)
	{
		std::cout << "������� ��������� ������: ";
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
			std::cout << "�������� ��������� ������." << std::endl;
			continue;
		}
	}

	//std::cout << "������� ����� ������ ������, �����: ";
	//obj->hose_job_h = search_input();

	//std::cout << "�����: ";
	//obj->hose_job_m = search_input();
}