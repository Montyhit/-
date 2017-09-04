

#ifndef MENU_H
#define MENU_H

#include <list>
#include "Hose.h"

void menu();		// ���� � ���������

void new_hose();	// �������� ������ � ���������� ��� �� �������� ����
void shift_hose();	// ����������� ������
void change_hose();	// ��������� ������
void del_hose();	// �������� ������
void search_hose();	// ����� ������
void quantity_hose();	// ���������� ���������� �������
void show_hose();	// ���������� ��� ������ 
void save_ALL();	// ���������� ������
void load_ALL();	// �������� ������
void auto_collation();	// �������������� ����������� ���� ��������

int input_validat();	// �������� �� ������������ �����

Hose funct_search(int);		// ������� ������ ������ �� ���� ����
bool funct_search_bool(int);	// ������� ������ ������ �� ���� ����
void funct_delete(int);			// ������� �������� 
void funct_hose_change(Hose *obj);	// ������� ��������� ������ ������
void funct_save(const char *name, std::list<Hose> *list);	// ������� ���������� ������� � ����
void funct_load(const char*, std::list<Hose>*);				// ������� �������� ������
void funct_collation(int quan_hose, int diameter_hose, std::list<Hose> *list);	// ������� �������������� �����������





#endif