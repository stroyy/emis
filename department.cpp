#include "department.h"
using namespace EMIS;



void Department::setDeptName(int deptname) {
	this->deptName = deptname;
}
void Department::setDeptID(int deptid) {
	this->deptID = deptid;
}

string Department::getDeptName() {
	return this->deptName;
}

string Department::getDeptID() {
	return this->deptID;
}

Department::Department(){}
Department::Department(string deptname, string deptid): deptName(deptname),deptID(deptid) {

}

ostream& EMIS::operator<<(ostream& os, const Department& d) {
	return os << d.deptName << setw(16) << d.deptID ;
}

istream& EMIS::operator>>(istream& is, Department& d) {
	return is >> d.deptName >> d.deptID;
}