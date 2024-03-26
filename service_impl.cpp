#include "service_impl.h"
using namespace EMIS;

ServiceImpl::ServiceImpl() {
	deptDao = new DepartmentDaoFileImpl();
	deptDao->load(depts);
	empDao = new EmployDaoFileImpl();
	empDao->load(employes);
	
}

bool ServiceImpl::addDept(Department& d){
	depts.push_back(d);
	return true;
}
bool ServiceImpl::deleteDept(string deptname){
	vector<Department>::iterator it;
	for (it = depts.begin();it != depts.end();it++) {
		if (it->getDeptName() == deptname) {
			depts.erase(it);
			return true;
		}
	}
	return false;
}

vector<Department> ServiceImpl::listDept() {
	return depts;
}

bool EMIS::ServiceImpl::addEmp(Employ& e)
{
	employes.push_back(e);
	return true;
}

bool EMIS::ServiceImpl::deleteEmp(string name)
{
	vector< Employ> ::iterator it;
	for (it = employes.begin();it != employes.end();it++) {
		if (it->getName() == name) {
			employes.erase(it);
			return true;
		}
	}
	return false;
}

vector<Employ> EMIS::ServiceImpl::listEmp()
{
	return employes;
}

ServiceImpl::~ServiceImpl(){
	deptDao->save(depts);
	delete deptDao;
	empDao->save(employes);
	delete empDao;
}