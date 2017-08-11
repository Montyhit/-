// —оздание рукава и добавление его на рукавную базу

#include <iostream>
#include <list>
#include "Hose.h"
#include "Funct.h"

void new_hose() {
	extern std::list<Hose> hose_base;
	Hose a;
	a.hose_change();
	int num_hose = a.get_num_hose();
	
	if (!hose_search_funct_bool(num_hose)) {	// ≈сли имеетс€ данный рукав то верентс€ true
		system("cls");
		std::cout << num_hose << " рукав помещен на рукавную базу." << std::endl;
		hose_base.push_back(a);
	}
	else {
		std::cout << "“акой номер рукава уже используетс€." << std::endl;	// —делать показ этого рукава и действи€ на ним
	}
}
