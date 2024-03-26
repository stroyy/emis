#pragma once
#include <string>
using namespace std;

namespace EMIS {
	class Employ {
	private:
		string name;
		int empID;
		bool gender;
		int age;
	public:
		static int auto_e_id;
	public:
		string getName();
		int getempID();
		bool getGender();
		int getAge();

		void setName(string name);
		void setID(int id);
		void setGender(bool gender);
		void setAge(int age);

		Employ();
		Employ(string name, int id, bool gender, int age);

		friend ostream& operator<<(ostream& os, const Employ& e);
		friend istream& operator>>(istream& is, Employ& e);

	};

	ostream& operator<<(ostream& os, const Employ& e);
	istream& operator>>(istream& is, Employ& e);
}
