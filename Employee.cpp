#include "Employee.h"
Employee::Employee(const std::string& Name, int id, const std::string& Pass, double Salary) :Person(Name, Pass, id) {
	setSalary(Salary);
}

//Getters
double Employee::getSalary()const {
	return salary;
}
std::string Employee::getName()const
{
	return name;
}

string Employee::getPassword()const
{
	return password;
}

int Employee::getId()const
{
	return id;
}


//Setters
void Employee::setSalary(double newSalary) {
	if (Validation::SalaryValidation(newSalary))
		salary = newSalary;
}
void Employee::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
	std::cout << "Password: " << password << std::endl;
    std::cout << "Salary: " << salary << " LE" << std::endl;
}