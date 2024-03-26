#include "manager.h"
using namespace EMIS;

int Manager::getId(){
	return id;	
}
string Manager::getName(){
	return name;
}
string Manager::getPassword(){
	return password;	
}
long Manager::getPerm(){
	return perm;
}
void Manager::setId(int id){
	this->id = id;	
}
void Manager::setName(string name){
	this->name = name;	
}
void Manager::setPassword(string password){
	this->password = password;
}
void Manager::setPerm(long perm){
	this->perm = perm;	
}
Manager::Manager(int id,string name,string password,long perm):id(id),name(name),password(password),perm(perm){
	
}
Manager::Manager(){
	
}

//全局函数
ostream& EMIS::operator<<(ostream& os,const Manager& m){
	return os << m.id << setw(16) << m.name << setw(16) << m.password << setw(6) << m.perm;	
}
istream& EMIS::operator>>(istream& is,Manager& m){
	return is >> m.id >> m.name >> m.password >> m.perm;
}

int Manager::autoId = 1000;


