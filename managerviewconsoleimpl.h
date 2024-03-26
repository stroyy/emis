#ifndef _MANAGER_VIEW_CONSOLE_IMPL_H__
#define _MANAGER_VIEW_CONSOLE_IMPL_H__

#include "managerview.h"
#include "managerservice.h"
#include "managerserviceimpl.h"

#include "serverviewconsoleimpl.h"

namespace EMIS{

class ManagerViewConsoleImpl:public ManagerView{
private:
	ManagerService *service; //管理逻辑
	//Service* subs;  //管理子系统逻辑

	ServerView* serviceview;//管理子系统菜单


public:
	ManagerViewConsoleImpl();
	void menu();
	void add();
	void del();
	void list();
	void subsystem();
	void run();
	~ManagerViewConsoleImpl();
};
	
}


#endif //_MANAGER_VIEW_CONSOLE_IMPL_H__
