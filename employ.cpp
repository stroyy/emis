#include "employ.h"
#include <iomanip>
using namespace EMIS;

string Employ::getName(){
	return name;
}

int Employ::getempID(){
	return empID;
}

bool Employ::getGender() {
	return gender;
}

int Employ::getAge(){
	return age;
}

void EMIS::Employ::setName(string name)
{
	this->name = name;
}

void EMIS::Employ::setID(int id)
{
	this->empID = id;
}

void EMIS::Employ::setGender(bool gender)
{
	this->gender = gender;
}

void EMIS::Employ::setAge(int age)
{
	this->age = age;
}

EMIS::Employ::Employ()
{
}

EMIS::Employ::Employ(string name, int id, bool gender, int age):name(name),empID(id),gender(gender),age(age)
{
}

ostream& EMIS::operator<<(ostream& os, const Employ& e)
{
	// TODO: 在此处插入 return 语句
	return os << e.name << setw(16) << e.empID << setw(16) << e.gender << setw(16) << e.age;
}

istream& EMIS::operator>>(istream& is, Employ& e)
{
	// TODO: 在此处插入 return 语句
	return is >> e.name >> e.empID >> e.gender >> e.age;
}

int Employ::auto_e_id = 2023001;
