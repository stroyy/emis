#ifndef _MANAGER_DAO_H__
#define _MANAGER_DAO_H__

#include <vector>
#include "manager.h"
using namespace std;

namespace EMIS{

//抽象类  接口类  接口层
class ManagerDao{
public:
	virtual vector<Manager>& load(vector<Manager>& managers) = 0;  //没有返回值也可以的
	virtual void save(vector<Manager>& managers) = 0;
	virtual ~ManagerDao(){};
};

}


#endif //_MANAGER_DAO_H__
