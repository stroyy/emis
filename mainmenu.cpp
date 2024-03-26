#include "mainmenu.h"

MainMenu::MainMenu() {
	//maView = new ManagerServiceImpl;
	
	SerView = new ServerViewConsoloImpl();
}

void MainMenu::menu() {
	cout << "-------��ҵ��Ӫ����ϵͳ--------" << endl;
	cout << "------1.���������ϵͳ --------" << endl;
	cout << "------2.����ҵ����ϵͳ --------" << endl;
	cout << "------0.�˳�           --------" << endl;
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
			cout << "��������" << endl;
		}
	}
}
MainMenu::~MainMenu() {
	delete SerView;
	delete maView;
}