#pragma once
#include "department.h"
#include "employ.h"
#include <vector>

namespace EMIS {
	class Service {
	protected:
		vector<Department> depts;//所有部门
		vector<Employ> employes;
	public:
		virtual bool addDept(Department& d) = 0;
		virtual bool deleteDept(string deptname) = 0;//根据名字删除部门
		virtual vector<Department> listDept() = 0;

		virtual bool addEmp(Employ& e) = 0;
		virtual bool deleteEmp(string name) = 0;//根据名字删除员工
		virtual vector<Employ> listEmp() = 0;

		virtual ~Service() {};
		
	};

}