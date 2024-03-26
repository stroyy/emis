#pragma once

#include "department.h"
#include <vector>

using namespace EMIS;

namespace EMIS {
	class DepartMentDao {
	public:
		virtual vector<Department>& load(vector<Department>& depts) = 0;
		virtual void  save(vector<Department>& depts) = 0;
		~DepartMentDao(){};
	};
}