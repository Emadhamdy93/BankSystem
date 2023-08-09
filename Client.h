#pragma once
#include"Person.h"

class Client:public Person
{
private:
	double balance;
public:
	Client(const std::string &Name, int id, const std::string &Pass, double Balance);

	//Setters
	void setName(std::string newName);
	void setPassword(std::string newPassword);
	void setBalance(double newBalance);

	//Getters
	double getBalance()const;

	void deposit(double amount);
	void withdraw(double amount);
	void transferTo(double amount,Client & client);
	void checkBalance()const;
	void display()const override;
	std::string getName()const override;
	string getPassword()const override;
	int getId()const override;

};

