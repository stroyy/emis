#include "managerserviceimpl.h"
using namespace EMIS;
/*
class ManagerServiceImpl:public ManagerService{
private:
	ManagerDao *dao;
public:
	ManagerServiceImpl();	
	bool addManager(Manager& m);
	bool deleteManger(int id);
	vector<Manager>& listManager(void);
	~ManagerServiceImpl(void);
};
*/	

ManagerServiceImpl::ManagerServiceImpl(){
	dao = new ManagerDaoFileImpl(); //父类指针指向子类对象	
	dao->load(managers);
}
bool ManagerServiceImpl::addManager(Manager& m){
	managers.push_back(m);
	return true;
}
bool ManagerServiceImpl::deleteManager(int id){
	vector<Manager>::iterator it;
	for(it=managers.begin();it!=managers.end();it++){
		if(it->getId() == id){
			managers.erase(it);
			return true;
		}	
	}
	return false;
}
vector<Manager>& ManagerServiceImpl::listManager(void){
	return managers;
}
ManagerServiceImpl::~ManagerServiceImpl(void){
	dao->save(managers);
	delete dao;
}
