#include "mainmenu.h"

MainMenu::MainMenu() {
	//maView = new ManagerServiceImpl;
	
	SerView = new ServerViewConsoloImpl();
}

void MainMenu::menu() {
	cout << "-------企业运营管理系统--------" << endl;
	cout << "------1.进入管理子系统 --------" << endl;
	cout << "------2.进入业务子系统 --------" << endl;
	cout << "------0.退出           --------" << endl;
	cout << ">>>>";
}

void MainMenu::run() {
	while (true) {
		menu();
		int input = 0;
		cin >> input;
		switch (input) {
		case 1:
			maView->run();
			break;
		case 2:
			SerView->run();
			break;
		case 0:
			return;
		default:
			cout << "操作错误" << endl;
		}
	}
}
MainMenu::~MainMenu() {
	delete SerView;
	delete maView;
}