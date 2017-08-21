#pragma once

#if !defined (MENU_H)
#define MENU_H

#include <list>
#include "Hose.h"



void new_hose();	// �������� ������ � ���������� ��� �� �������� ����
void shift_hose();	// ����������� ������
void change_hose();	// ��������� ������
void del_hose();	// �������� ������
void search_hose();	// ����� ������
void quantity_hose();	// ���������� ���������� �������
void show_hose();	// ���������� ��� ������ 

// ������� ������ ������ �� ���� ����
Hose hose_search_funct(int&);		
bool hose_search_funct_bool(int&);	

// ������� ������ � �������� ������
int funct_del_hose(int num_hose);

// ���� � ���������
void program();

// ���������� ������
void save_ALL();

// �������� ������
void load_ALL();

int input_validat();	// �������� �� ������������ �����


#endif