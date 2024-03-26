#pragma once
#include "department_dao.h"
#include <fstream>

namespace EMIS {
	class DepartmentDaoFileImpl :public DepartMentDao {
	public:
		vector<Department>& load(vector<Department>& depts);
		void save(vector<Department>& depts);

	};
}