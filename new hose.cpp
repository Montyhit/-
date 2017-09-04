// —оздание рукава и добавление его на рукавную базу

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void new_hose() {
	extern std::list<Hose> hose_base;
	Hose hose;
	hose.create_hose();

	if (!funct_search_bool(hose.get_num_hose())) {	// ≈сли имеетс€ данный рукав то верентс€ true
		system("cls");
		std::cout << hose.get_num_hose() << " рукав помещен на рукавную базу." << std::endl;
		hose_base.push_back(hose);
	}
	else {
		std::cout << "“акой номер рукава уже используетс€." << std::endl;	// —делать показ этого рукава и действи€ на ним
	}
}

