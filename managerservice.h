#ifndef _MANAGER_SERVICE_H__
#define _MANAGER_SERVICE_H__

#include "manager.h"
#include <vector>

namespace EMIS{

class ManagerService{
protected:
	vector<Manager> managers;
public:
	virtual bool addManager(Manager& m) = 0;
	virtual bool deleteManager(int id) = 0;
	virtual vector<Manager>& listManager(void) = 0;
	virtual ~ManagerService(void){};
};

}


#endif //_MANAGER_SERVICE_H__
