#pragma once
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

namespace EMIS {
	class Department {
	private:
		string deptName;//部门名称
		string deptID;  //部门编号
	public:
		void setDeptName(int deptname);
		void setDeptID(int deptid);

		string getDeptName();
		string getDeptID();

		Department();
		Department(string deptname, string deptid);

		friend ostream& operator<<(ostream& , const Department& );
		friend istream& operator>>(istream& , Department& );
	};

	ostream& operator<<(ostream& os, const Department& d);
	istream& operator>>(istream& is, Department& d);
}