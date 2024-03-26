#include "department_daofile_impl.h"
using namespace EMIS;

vector<Department>& DepartmentDaoFileImpl::load(vector<Department>& depts) {
	ifstream ifs("department.txt");
	if (!ifs) {
		return depts;
	}
	int cnt = 0;
	ifs >> cnt;
	for (int i = 0;i < cnt;i++) {
		Department m;
		ifs >> m;
		depts.push_back(m);
	}
	ifs.close();
	return depts;
}

void DepartmentDaoFileImpl::save(vector<Department>& depts){
	ofstream ofs("department.txt");
	if (!ofs) {
		throw string("save file failed!!!");
	}
	ofs << depts.size();
	vector<Department> ::iterator it;
	for (it = depts.begin();it != depts.end();it++) {
		ofs << *it << endl;
	}

	ofs.close();
}

