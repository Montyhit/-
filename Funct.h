#pragma once

#if !defined (MENU_H)
#define MENU_H

#include <list>
#include "Hose.h"



void new_hose();	// Создание рукава и добавление его на рукавную базу
void shift_hose();	// Перемещение рукава
void change_hose();	// Изменение рукава
void del_hose();	// Удаление рукава
void search_hose();	// Поиск рукава
void quantity_hose();	// Показывает количество рукавов
void show_hose();	// Показывает все рукава 

// функция поиска рукава по всей базе
Hose hose_search_funct(int&);		
bool hose_search_funct_bool(int&);	

// функция поиска и удаления рукава
int funct_del_hose(int num_hose);

// Вход в программу
void program();

// сохранение данных
void save_ALL();

// загрузка данных
void load_ALL();

int input_validat();	// Проверка на правельность ввода


#endif