#include "managerdaofileimpl.h"
using namespace EMIS;

//class ManagerDaoFileImpl:public ManagerDao

vector<Manager>& ManagerDaoFileImpl::load(vector<Manager>& managers){
	ifstream ifs("manager.txt");
	if(!ifs){
		return managers;	
	}
	int cnt = 0;
	ifs >> cnt;
	for(int i=0;i<cnt;i++){
		Manager m;
		ifs >> m;
		managers.push_back(m);
	}
	ifs >> Manager::autoId;
	ifs.close();
	return managers;
}

void ManagerDaoFileImpl::save(vector<Manager>& managers){
	ofstream ofs("manager.txt");
	if(!ofs){
		throw string("save manager failed");
		//return;//抛出异常
	}
	ofs << managers.size() << endl;
	vector<Manager>::iterator it;
	for(it=managers.begin();it!=managers.end();it++){
		ofs << *it << endl;	
	}
	ofs << Manager::autoId; 
	ofs.close();
}

