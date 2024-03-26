#include <iostream>
#include "serverviewconsoleimpl.h"
using namespace std;
using namespace EMIS;

ServerViewConsoloImpl::ServerViewConsoloImpl(){
	service = new ServiceImpl();
}
void ServerViewConsoloImpl::menu() {
	cout << "-------��ҵ��Ӫҵ��ϵͳ--------" << endl;
	cout << "------1.���Ӳ��� --------" << endl;
	cout << "------2.ɾ������ --------" << endl;
	cout << "------3.�г����в��� --------" << endl;
	cout << "------4.����Ա��--------" << endl;
	cout << "------5.ɾ��Ա�� --------" << endl;
	cout << "------6.�г�����Ա����Ϣ  --------" << endl;
	cout << "------0.�˳�		   --------" << endl;
	cout << ">>>>";
}

void ServerViewConsoloImpl::addDept(){
	cout << "���Ӳ���......" << endl;
	cout << "���벿�����ƣ�";
	string deptName;
	cin >> deptName;
	cout << "���벿�ű�ţ�";
	string deptID;
	cin >> deptID;
	Department d(deptName, deptID);
	int ret = service->addDept(d);
	if (ret) {
		cout << "���Ӳ��ųɹ�������" << endl;
	}
	else {
		cout << "���Ӳ���ʧ�ܣ�����" << endl;
	}
	
}

void ServerViewConsoloImpl::deleteDept(){
	cout << "����Ҫɾ���Ĳ������ƣ�";
	string deptname;
	cin >> deptname;
	if (service->deleteDept(deptname)) {
		cout << "����ɾ���ɹ�������" << endl;
	}
	else {
		cout << "����Ĳ��Ų����ڣ�����" << endl;
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
		cout << "û���κβ���" << endl;
	}
}

void ServerViewConsoloImpl::addEmp(){
	cout << "����Ա��..." << endl;
	cout << "����Ա��������";
	string name;
	cin >> name;
	cout << "¼��Ա���Ա�(1�� 0 Ů)";
	int gender;
	cin >> gender;
	cout << "¼��Ա�����䣺";
	int age;
	cin >> age;
	Employ e(name, Employ::auto_e_id++, gender, age);
	if (service->addEmp(e)) {
		cout << "Ա��¼��ɹ�������" << endl;
	}
	else {
		cout << "Ա��¼��ʧ�ܣ�����" << endl;
	}

}

void ServerViewConsoloImpl::deleteEmp() {
	cout << "����Ҫɾ����Ա��������";
	string empname;
	cin >> empname;
	if (service->deleteEmp(empname)) {
		cout << "Ա��ɾ���ɹ�������" << endl;
	}
	else {
		cout << "�����Ա�������ڣ�����" << endl;
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
		cout << "û���κ�Ա��" << endl;
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
			cout << "��������" << endl;
		}
	}
	
}

ServerViewConsoloImpl::~ServerViewConsoloImpl() {
	delete service;
}