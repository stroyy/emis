#pragma once

#include "serverview.h"
#include "service.h"
#include "service_impl.h"
using namespace EMIS;

namespace EMIS {
	class ServerViewConsoloImpl :public ServerView {
	private:
		Service* service;
	public:
		ServerViewConsoloImpl();
		void menu();
		void addDept();
		void deleteDept();
		void listDept();
		void addEmp();
		void deleteEmp();
		void listEMP();
		void run();
		~ServerViewConsoloImpl();
	};
}