#include "employ_daofile_impl.h"
using namespace EMIS;

vector<Employ>& EmployDaoFileImpl::load(vector<Employ>& emps)
{
    ifstream ifs("employ.txt");
    int e_count;
    ifs >> e_count;
    for (int i = 0;i < e_count;i++) {
        Employ e;
        ifs >> e;
        emps.push_back(e);
    }

    ifs >> Employ::auto_e_id;
    ifs.close();
    return emps;
}

void EmployDaoFileImpl::save( vector<Employ>& emps)
{
    ofstream ofs("employ.txt");
    if (!ofs) {
        throw string("save file failed!!!");
    }
    ofs << emps.size();
    vector<Employ>::iterator it;
    for (it = emps.begin();it != emps.end();it++) {
        ofs << *it << endl;
    }

    ofs << Employ::auto_e_id;

    ofs.close();
}

