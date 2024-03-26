#include <iostream>
#include "serverviewconsoleimpl.h"
using namespace std;
using namespace EMIS;

ServerViewConsoloImpl::ServerViewConsoloImpl(){
	service = new ServiceImpl();
}
void ServerViewConsoloImpl::menu() {
	cout << "-------企业运营业务系统--------" << endl;
	cout << "------1.增加部门 --------" << endl;
	cout << "------2.删除部门 --------" << endl;
	cout << "------3.列出所有部门 --------" << endl;
	cout << "------4.增加员工--------" << endl;
	cout << "------5.删除员工 --------" << endl;
	cout << "------6.列出所有员工信息  --------" << endl;
	cout << "------0.退出		   --------" << endl;
	cout << ">>>>";
}

void ServerViewConsoloImpl::addDept(){
	cout << "增加部门......" << endl;
	cout << "输入部门名称：";
	string deptName;
	cin >> deptName;
	cout << "输入部门编号：";
	string deptID;
	cin >> deptID;
	Department d(deptName, deptID);
	int ret = service->addDept(d);
	if (ret) {
		cout << "增加部门成功！！！" << endl;
	}
	else {
		cout << "增加部门失败！！！" << endl;
	}
	
}

void ServerViewConsoloImpl::deleteDept(){
	cout << "输入要删除的部门名称：";
	string deptname;
	cin >> deptname;
	if (service->deleteDept(deptname)) {
		cout << "部门删除成功！！！" << endl;
	}
	else {
		cout << "输入的部门不存在！！！" << endl;
	}
}

void ServerViewConsoloImpl::listDept(){
	vector<Department> depts = service->listDept();
	vector<Department>::iterator it;
	if (!depts.empty()) {
		cout << "DEPTNAME" << setw(16) << "DEPTID" << endl;
		for (it = depts.begin();it != depts.end();it++) {
			cout << *it << endl;
		}
	}
	else {
		cout << "没有任何部门" << endl;
	}
}

void ServerViewConsoloImpl::addEmp(){
	cout << "增加员工..." << endl;
	cout << "输入员工姓名：";
	string name;
	cin >> name;
	cout << "录入员工性别：(1男 0 女)";
	int gender;
	cin >> gender;
	cout << "录入员工年龄：";
	int age;
	cin >> age;
	Employ e(name, Employ::auto_e_id++, gender, age);
	if (service->addEmp(e)) {
		cout << "员工录入成功！！！" << endl;
	}
	else {
		cout << "员工录入失败！！！" << endl;
	}

}

void ServerViewConsoloImpl::deleteEmp() {
	cout << "输入要删除的员工姓名：";
	string empname;
	cin >> empname;
	if (service->deleteEmp(empname)) {
		cout << "员工删除成功！！！" << endl;
	}
	else {
		cout << "输入的员工不存在！！！" << endl;
	}
}

void ServerViewConsoloImpl::listEMP() {
	vector<Employ> emps = service->listEmp();
	vector<Employ>::iterator it;
	if (!emps.empty()) {
		cout << "EMPNAME" << setw(16) << "EMPID" << setw(16) << "EMPGENDER" << setw(16) << "EMPAGE" << endl;
		for (it = emps.begin();it != emps.end();it++) {
			cout << *it << endl;
		}
	}
	else {
		cout << "没有任何员工" << endl;
	}
}

void ServerViewConsoloImpl::run() {
	while (true) {
		menu();
		int input = 0;
		cin >> input;
		switch (input) {
		case 1:
			addDept();
			break;
		case 2:
			deleteDept();
			break;
		case 3:
			listDept();
			break;
		case 4:
			addEmp();
			break;
		case 5:
			deleteEmp();
			break;
		case 6:
			listEMP(); 
			break;
		case 0:
			return;
		default:
			cout << "操作错误" << endl;
		}
	}
	
}

ServerViewConsoloImpl::~ServerViewConsoloImpl() {
	delete service;
}