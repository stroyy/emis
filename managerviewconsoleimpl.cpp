#include <iomanip>
#include "manager.h"
#include "managerviewconsoleimpl.h"
#include "serverviewconsoleimpl.h"

using namespace EMIS;

/*
class ManagerViewConsoleImpl{
private:
	ManagerService *service;
public:
	ManagerViewConsoleImpl();
	void menu();
	void add();
	void del();
	void list();
	~ManagerViewConsoleImpl();
};
*/


ManagerViewConsoleImpl::ManagerViewConsoleImpl(){
	service = new ManagerServiceImpl();	
	serviceview = new ServerViewConsoloImpl();
}
void ManagerViewConsoleImpl::menu(){
	cout << "-------企业运营管理系统--------" << endl;
	cout << "------1.增加管理员     --------" << endl;
	cout << "------2.删除管理员     --------" << endl;
	cout << "------3.列出管理员     --------" << endl;
	cout << "------4.运营管理子系统 --------" << endl;
	cout << "------0.退出           --------" << endl;
	cout << ">>>>";
}
void ManagerViewConsoleImpl::add(){
	cout << "请输入管理员姓名:";
	string name;
	cin >> name;
	cout << "请输入管理员密码:";
	string password;
	cin >> password;
	cout << "请输入管理员权限(0,1):";
	long perm;
	cin >> perm;
	Manager m(Manager::autoId++,name,password,perm);
	bool ret = service->addManager(m);
	if(ret){
		cout << "添加管理员成功" << endl;
		cout << m << endl;
	}
}
void ManagerViewConsoleImpl::del(){
	cout << "请输入管理员的id:";
	int id = 0;
	cin >> id;
	bool ret = service->deleteManager(id);
	if(ret){
		cout << "删除成功!" << endl;	
	}else{
		cout << "删除失败!" << endl;	
	}
}
void ManagerViewConsoleImpl::list(){
	vector<Manager>& managers = service->listManager();
	vector<Manager>::iterator it;
	if(!managers.empty()){
		cout << "ID" << setw(16) << "NAME" << setw(16) << "PASSWORD" << setw(6) << "PERM" << endl;
		for(it=managers.begin();it!=managers.end();it++){
			cout << *it << endl;
		}
	}else{
		cout << "暂无管理员" << endl;
	}
}

void EMIS::ManagerViewConsoleImpl::subsystem()
{
	serviceview->run();
}

void ManagerViewConsoleImpl::run(){
	while(true){
		menu();
		int input = 0;
		cin >> input;
		switch(input){
			case 1:
				add();
				break;
			case 2:
				del();
				break;
			case 3:
				list();
				break;
			case 4:
				//cout << "尚未完成" << endl;
				subsystem();
				break;
			case 0:
				return;
			default:
				cout << "操作错误" << endl;
		}
	}	
}

ManagerViewConsoleImpl::~ManagerViewConsoleImpl(){
	delete service;	
	delete serviceview;
}



