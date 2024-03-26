#pragma once
#include "department.h"
#include "employ.h"
#include <vector>

namespace EMIS {
	class Service {
	protected:
		vector<Department> depts;//���в���
		vector<Employ> employes;
	public:
		virtual bool addDept(Department& d) = 0;
		virtual bool deleteDept(string deptname) = 0;//��������ɾ������
		virtual vector<Department> listDept() = 0;

		virtual bool addEmp(Employ& e) = 0;
		virtual bool deleteEmp(string name) = 0;//��������ɾ��Ա��
		virtual vector<Employ> listEmp() = 0;

		virtual ~Service() {};
		
	};

}