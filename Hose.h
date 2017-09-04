#ifndef HOSE_H
#define HOSE_H

#include <iostream>
#include <fstream>
#include <string>

// �����
class Hose {
private:
	int num_hose;
	int category_hose;
	int diameter_hose;
	int hose_job_h;	// ��������� ������, ���
	int hose_job_m;	// ��������� ������, ���

public:
	Hose() : num_hose(0), category_hose(0), diameter_hose(0), hose_job_h(0), hose_job_m(0) {};
	Hose(const Hose*);	// ����������� �����������

	Hose operator=(const Hose*);
	bool operator== (const Hose*);
	bool operator== (const int);
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
	void create_hose();	// �������� ������
	void show_hose();

	friend void funct_hose_change(Hose *obj);	// ��������� ������ ������
};

#endif // !HOSE_H