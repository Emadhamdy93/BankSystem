#pragma once
#include"Util.h"
#include<string>
using namespace std;
class Person {
protected:
	std::string name;
	std::string password;
	int id;


public:
	Person(string Name, string Pass, int ID);

	//Setters
	void setName(std::string newName);
	void setPassword(std::string newPassword);
	void setID(int newid);
	// Getters
	virtual string  getName()const =0 ;
	virtual string getPassword()const =0;
	virtual int getId()const =0;
	virtual void display()const = 0;
};

