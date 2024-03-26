#ifndef _MANAGER_SERVICE_IMPL_H__
#define _MANAGER_SERVICE_IMPL_H__

#include "managerservice.h"
#include "managerdao.h"
#include "managerdaofileimpl.h"

namespace EMIS{

class ManagerServiceImpl:public ManagerService{
private:
	ManagerDao *dao;
public:
	ManagerServiceImpl();	
	bool addManager(Manager& m);
	bool deleteManager(int id);
	vector<Manager>& listManager(void);
	~ManagerServiceImpl(void);
};
	
}


#endif //_MANAGER_SERVICE_IMPL_H__
