// —оздание рукава и добавление его на рукавную базу

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"
#include "Singleton.h"

void new_hose() 
{
	Hose hose;
	hose.create_hose();

	system("cls");
	if (!funct_search_bool(hose.get_num_hose()))	// ≈сли имеетс€ данный рукав то верентс€ true
	{	
		std::cout << hose.get_num_hose() << " рукав помещен на рукавную базу." << std::endl;
		Hose_base::call()->push_back(hose);
	}
	else 
	{
		std::cout << "“акой номер рукава уже используетс€." << std::endl;	// —делать показ этого рукава и действи€ на ним
	}
}

