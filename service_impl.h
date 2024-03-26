#pragma once
#include "service.h"
#include "department_dao.h"
#include "department_daofile_impl.h"
#include "employ_daofile_impl.h"

namespace EMIS {
	class ServiceImpl :public Service {
	private:
		DepartMentDao* deptDao;
		EmployDao* empDao;
	public:
		ServiceImpl();
		bool addDept(Department& d);
		bool deleteDept(string deptname);
		vector<Department> listDept();

		bool addEmp(Employ& e);
		bool deleteEmp(string name);
		vector<Employ> listEmp();

		~ServiceImpl();
	};
}