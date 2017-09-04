// ������� �������� ������

#include <iostream>
#include <fstream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void funct_load(const char *name, std::list<Hose> *list)
{
	Hose tmp_obj;

	std::ifstream file(name, std::ios::binary);

	if (!file)
	{
		std::cout << "���� " << name << " ����������� ��� ���������." << std::endl;
		return;
	}

	file.seekg(0, std::ios::end);					// ������������� ��������� � ����� � ����� �����
	int ammount_obj = file.tellg() / sizeof(Hose);	// ������ ���������� �������� � �����
	file.seekg(0);									// ������������� ��������� � ����� � ������ �����

	while (ammount_obj)
	{
		file.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		list->push_back(tmp_obj);
		ammount_obj--;
	}
	file.close();
}
