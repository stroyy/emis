#pragma once
#include "employ.h"
#include <vector>



namespace EMIS {
	class EmployDao {
	public:
		virtual vector<Employ>& load(vector<Employ>& emps) = 0;
		virtual void save(vector<Employ>& emps) = 0;
	};
}