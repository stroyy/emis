#ifndef _MANAGER_H__
#define _MANAGER_H__

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//名字空间
namespace EMIS{


//管理员类
class Manager{
private:              //成员属性
	int id;           //管理员id,自动生成，唯一且不重复
	string name;      //名字
	string password;  //密码
	long perm;        //权限
public:
	static int autoId;
public:
	int getId();
	string getName();
	string getPassword();
	long getPerm();
	void setId(int id);
	void setName(string name);
	void setPassword(string password);
	void setPerm(long perm);
	Manager(int id,string name,string password,long perm);
	Manager();
	friend ostream& operator<<(ostream& os,const Manager& m);
	friend istream& operator>>(istream& is,Manager& m);
};

//全局函数
ostream& operator<<(ostream& os,const Manager& m);
istream& operator>>(istream& is,Manager& m);

}
#endif //_MANAGER_H__
