#ifndef HOSE_H
#define HOSE_H

#include <iostream>
#include <fstream>
#include <string>

// Константы пожарных пукавов
const enum diameter_hose { _38 = 38, _51 = 51, _66 = 66, _75 = 75, _77 = 77, _125 = 125, _150 = 150 };
const enum category_hose { cat_1 = 1, cat_2, cat_3 };

// рукав
class Hose 
{
private:
	int num_hose;
	int category_hose;
	int diameter_hose;
	int hose_job_h;	// наработка рукава, час
	int hose_job_m;	// наработка рукава, мин

public:
	Hose() : num_hose(0), category_hose(0), diameter_hose(0), hose_job_h(0), hose_job_m(0) {};
	Hose(const Hose*);	// Конструктор копирования

	Hose operator= (const Hose*);
	bool operator== (const Hose*);
	bool operator== (const int num_hose);

	inline int get_num_hose() 
	{
		return num_hose;
	}				
	inline int get_category_hose()
	{
		return category_hose;
	}
	inline int get_diameter_hose()
	{
		return diameter_hose;
	}			
	int diam(int diam)
	{
		return this->diameter_hose == diam ? true : false;
	}
	void create_hose();	// создание рукава
	void show_hose();

	friend void funct_hose_change(Hose *obj);	// изменение данных рукава
};

#endif // !HOSE_H