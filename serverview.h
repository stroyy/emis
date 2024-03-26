#pragma once

namespace EMIS {

	class ServerView {
	public:
		virtual void menu() = 0;
		virtual void addDept() = 0;
		virtual void deleteDept() = 0;
		virtual void listDept() = 0;
		virtual void addEmp() = 0;
		virtual void deleteEmp() = 0;
		virtual void listEMP() = 0;
		virtual void run() = 0;
		virtual ~ServerView() {};
	};
}