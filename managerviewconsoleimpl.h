#ifndef _MANAGER_VIEW_CONSOLE_IMPL_H__
#define _MANAGER_VIEW_CONSOLE_IMPL_H__

#include "managerview.h"
#include "managerservice.h"
#include "managerserviceimpl.h"

#include "serverviewconsoleimpl.h"

namespace EMIS{

class ManagerViewConsoleImpl:public ManagerView{
private:
	ManagerService *service; //�����߼�
	//Service* subs;  //������ϵͳ�߼�

	ServerView* serviceview;//������ϵͳ�˵�


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
