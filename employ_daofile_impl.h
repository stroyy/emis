#pragma once
#include "employdao.h"
#include <fstream>

using namespace EMIS;

namespace EMIS {
	class EmployDaoFileImpl :public EmployDao {
	public:
		vector<Employ>& load(vector<Employ>& emps);
		void  save(vector<Employ>& emps);
	};
}