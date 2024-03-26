#pragma once

#include "managerview.h"
#include "managerviewconsoleimpl.h"
#include "serverview.h"
#include "serverviewconsoleimpl.h"
#include "managerservice.h"
using namespace EMIS;




	class MainMenu {
	private:
		ManagerViewConsoleImpl* maView = new ManagerViewConsoleImpl();
		ServerView* SerView;
	public:
		MainMenu();
		void menu();
	
		void run() ;
		~MainMenu() ;
	};
