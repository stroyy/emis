#include "managerview.h"
#include "managerviewconsoleimpl.h"
#include "mainmenu.h"
using namespace EMIS;

int main(){
	ManagerView *view = new ManagerViewConsoleImpl();
	view->run();
	delete view;
	/*MainMenu* mainme = new MainMenu();
	mainme->run();
	delete mainme;*/
	return 0;	
}
