#include "Vubir_zadachu.h"
using namespace std;

void Zadachu()
{
	cout << "Oberite zadachy:\n"
		<< "1. Binarnui poshuk;\n"
		<< "2. Zsuv masuvy ;\n"
		<< "3. Shahovui kin;\n"
		<< "5. Gra \"Patnasku\";\n"
		<< "4. Gra \"Hrestuku-nyluku\";\n"
		<< "6. Vuhid\n";
}

void Switch_zadachu(int a)
{
	switch (a) {
	case 1: Binarnui_poshuk(); break;
	case 2: Zsuv_masuvy();break;
	case 3: /*Shahovui_kin();*/break;
	case 4: /*Gra_Patnasku();*/break;
	case 5: /*Gra_Hrestuku_Nyluku();*/break;
	case 6:break;
	default:Default;
		Show('\n');
	}
}