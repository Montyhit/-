#pragma once

#ifndef HOSE_H
#define HOSE_H

#include <iostream>
#include <fstream>
#include <string>

// рукав
class Hose {
private:
	int num_hose;
	int category_hose;
	int diameter_hose;
	int hose_job_h;	// наработка рукава, час
	int hose_job_m;	// наработка рукава, мин
public:
	Hose() : num_hose(0), category_hose(0), diameter_hose(0), hose_job_h(0), hose_job_m(0) {};
	Hose(const Hose*);	// Конструктор копирования

	Hose operator=(const Hose*);

	inline int get_num_hose() {
		return num_hose;
	}

	void hose_change();	// изменение данных рукава

	void show_hose();
};


#endif // !HOSE_H