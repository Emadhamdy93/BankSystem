#pragma once
#include"Person.h"
#include"Client.h"
class Employee  :public Person
{
private:
	double salary;
public:
	Employee(const std::string& Name, int id, const std::string& Pass, double salary);

	//Getters
	double getSalary()const;
	std::string getName()const override;
	string getPassword()const override;
	int getId()const override;

	//Setters
	void setSalary(double newSalary);


	void display() const override;

	
};

