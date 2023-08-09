#pragma once
#include"Employee.h"
class Admin:public Employee
{

public:
	Admin(const std::string& Name, int id, const std::string& Pass, double salary);

};

