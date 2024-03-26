#ifndef _MANAGER_DAO_FILE_IMPL_H__
#define _MANAGER_DAO_FILE_IMPL_H__

#include <fstream>
#include "managerdao.h"


namespace EMIS{

class ManagerDaoFileImpl:public ManagerDao{
public:
	vector<Manager>& load(vector<Manager>& managers);
	void save(vector<Manager>& managers);
};
	
	
}



#endif //_MANAGER_DAO_FILE_IMPL_H__
