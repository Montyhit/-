

#ifndef MENU_H
#define MENU_H

#include <list>
#include "Hose.h"

void menu();		// Вход в программу

void new_hose();	// Создание рукава и добавление его на рукавную базу
void shift_hose();	// Перемещение рукава
void change_hose();	// Изменение рукава
void del_hose();	// Удаление рукава
void search_hose();	// Поиск рукава
void quantity_hose();	// Показывает количество рукавов
void show_hose();	// Показывает все рукава 
void save_ALL();	// сохранение данных
void load_ALL();	// загрузка данных
void auto_collation();	// Автоматическая комплетовка ПАСА рукавами

int input_validat();	// Проверка на правильность ввода

Hose funct_search(int);		// функция поиска рукава по всей базе
bool funct_search_bool(int);	// функция поиска рукава по всей базе
void funct_delete(int);			// функция удаления 
void funct_hose_change(Hose *obj);	// Функция изменения данных рукава
void funct_save(const char *name, std::list<Hose> *list);	// Функция сохранения объекта в файл
void funct_load(const char*, std::list<Hose>*);				// Функция загрузки данных
void funct_collation(int quan_hose, int diameter_hose, std::list<Hose> *list);	// Функция автоматической комплетовки





#endif