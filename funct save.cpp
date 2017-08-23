// Функция сохранения данных

#include <fstream>
#include <list>
#include "Hose.h"
#include "Funct.h"

//template <class T>
void save(const char *name, std::list<Hose> list)
{
	remove(name);

	std::ofstream file(name, std::ios::app | std::ios::binary);

	for (auto f : list)
		file.write(reinterpret_cast<char*>(&f), sizeof(f));

	file.close();
}