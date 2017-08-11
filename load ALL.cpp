// �������� ���� ������ �� ����� � ���������

#include <fstream>
#include <iostream>
#include <list>
#include <cstdio>
#include "Funct.h"

void load_ALL()
{
	setlocale(LC_ALL, "rus");
	
	extern std::list<Hose> hose_base;
	extern std::list<Hose> repairs;
	extern std::list<Hose> AKTPL;
	extern std::list<Hose> AC_2_5;
	extern std::list<Hose> AC_5_0;
	extern std::list<Hose> AGDZS;
	extern std::list<Hose> ABR;

	Hose tmp_obj;

	/////////////////////////////// �������� ������ hose_base ///////////////////////////////
	std::ifstream file_hose_base("Hose base.DAT", std::ios::binary);

	file_hose_base.seekg(0, std::ios::end);	// ������������� ��������� �� 0 ���� �� ����� �����
	int amount_hose_file = file_hose_base.tellg() / sizeof(tmp_obj);	// ��������� ������ ���� �����, �� ������ ����� �� �������� ��������� � ����� � ����� �� ������ �������
	file_hose_base.seekg(0);	// ��������� �� ������ �����
	
	if (!file_hose_base)
		return void();

	while (amount_hose_file)
	{
		file_hose_base.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_hose_base.close();	

	///////////////////////////// �������� ������ repairs ///////////////////////////////
	std::ifstream file_repairs("Repairs.DAT", std::ios::binary);

	file_repairs.seekg(0, std::ios::end);	
	amount_hose_file = file_repairs.tellg() / sizeof(tmp_obj);	
	file_repairs.seekg(0);

	if (!file_repairs)
		return void();

	while (amount_hose_file)
	{
		file_repairs.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_repairs.close();
	
	/////////////////////////////// �������� ������ AKTPL /////////////////////////////////
	std::ifstream file_AKTPL("AKTPL.DAT", std::ios::binary);

	file_AKTPL.seekg(0, std::ios::end);
	amount_hose_file = file_AKTPL.tellg() / sizeof(tmp_obj);
	file_AKTPL.seekg(0);

	if (!file_AKTPL)
		return void();

	while (amount_hose_file)
	{
		file_AKTPL.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_AKTPL.close();
	
	/////////////////////////////// �������� ������ AC_2_5 ////////////////////////////////
	std::ifstream file_AC_2_5("AC 2.5_50.DAT", std::ios::binary);

	file_AC_2_5.seekg(0, std::ios::end);	
	amount_hose_file = file_AC_2_5.tellg() / sizeof(tmp_obj);	
	file_AC_2_5.seekg(0);

	if (!file_AC_2_5)
		return void();

	while (amount_hose_file)
	{
		file_AC_2_5.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_AC_2_5.close();
	
	/////////////////////////////// �������� ������ AC_5_0 ////////////////////////////////
	std::ifstream file_AC_5_0("AC 5.0_50.DAT", std::ios::binary);

	file_AC_5_0.seekg(0, std::ios::end);
	amount_hose_file = file_AC_5_0.tellg() / sizeof(tmp_obj);
	file_AC_5_0.seekg(0);

	if (!file_AC_5_0)
		return void();

	while (amount_hose_file)
	{
		file_AC_5_0.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_AC_5_0.close();
	
	/////////////////////////////// �������� ������ AGDZS /////////////////////////////////
	std::ifstream file_AGDZS("AGDZS.DAT", std::ios::binary);

	file_AGDZS.seekg(0, std::ios::end);
	amount_hose_file = file_AGDZS.tellg() / sizeof(tmp_obj);
	file_AGDZS.seekg(0);

	if (!file_AGDZS)
		return void();

	while (amount_hose_file)
	{
		file_AGDZS.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_AGDZS.close();
	
	/////////////////////////////// �������� ������ ABR //////////////////////////////////
	std::ifstream file_ABR("ABR.DAT", std::ios::binary);

	file_ABR.seekg(0, std::ios::end);
	amount_hose_file = file_ABR.tellg() / sizeof(tmp_obj);
	file_ABR.seekg(0);

	if (!file_ABR)
		return void();

	while (amount_hose_file)
	{
		file_ABR.read(reinterpret_cast<char*>(&tmp_obj), sizeof(tmp_obj));
		hose_base.push_back(tmp_obj);
		amount_hose_file--;
	}
	file_ABR.close();

	std::cout << "������ ���������." << std::endl;
}
