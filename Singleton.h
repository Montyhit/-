#pragma once

#include <list>
#include "Hose.h"

class Hose_base
{
	Hose_base() = delete;
	Hose_base(const Hose_base*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *hose_base = new std::list<Hose>;
		return hose_base;
	}
};

class Repairs
{
	Repairs() = delete;
	Repairs(const Repairs*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *repairs = new std::list<Hose>;
		return repairs;
	}
};

class AKTPL
{
	AKTPL() = delete;
	AKTPL(const AKTPL*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *AKTPL = new std::list<Hose>;
		return AKTPL;
	}
};

class AC_2_5
{
	AC_2_5() = delete;
	AC_2_5(const AC_2_5*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *AC_2_5 = new std::list<Hose>;
		return AC_2_5;
	}
};

class AC_5_0
{
	AC_5_0() = delete;
	AC_5_0(const AC_5_0*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *AC_5_0 = new std::list<Hose>;
		return AC_5_0;
	}
};

class AGDZS
{
	AGDZS() = delete;
	AGDZS(const AGDZS*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *AGDZS = new std::list<Hose>;
		return AGDZS;
	}
};

class ABR
{
	ABR() = delete;
	ABR(const ABR*) = delete;
	std::list<Hose> operator = (const std::list<Hose>*) = delete;
public:
	static std::list<Hose> *call()
	{
		static std::list<Hose> *ABR = new std::list<Hose>;
		return ABR;
	}
};