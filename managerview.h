#ifndef _MANAGER_VIEW_H__
#define _MANAGER_VIEW_H__

namespace EMIS{

class ManagerView{
public:
	virtual void menu() = 0;
	virtual void add() = 0;
	virtual void del() = 0;
	virtual void list() = 0;
	virtual void subsystem() = 0;
	virtual void run() = 0;
	virtual ~ManagerView(){};
};
	
}


#endif //_MANAGER_VIEW_H__

