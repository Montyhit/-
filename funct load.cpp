// Функция загрузки данных

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
		std::cout << "Файл " << name << " отсутствует или поврежден." << std::endl;
		return;
	}

	file.seekg(0, std::ios::end);					// Устанавливаем указатель в файле в конец файла
	int ammount_obj = file.tellg() / sizeof(Hose);	// Узнаем количество объектов в файле
	file.seekg(0);									// Устанавливаем указатель в файле в начало файла

	while (ammount_obj)
	{
		file.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		list->push_back(tmp_obj);
		ammount_obj--;
	}
	file.close();
}
