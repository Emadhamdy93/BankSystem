#include<iostream>
#include <string>
#include "Client.h"
#include"Util.h"
Client::Client(const std::string &Name, int id, const std::string & Pass, double Balance) :Person(Name, Pass, id) {
	setBalance(Balance);
}

void Client::setName(std::string newName)
{
	if (Validation::nameValidation(newName)) {
		this->name = newName;
	}
}
void Client::setPassword(std::string newPassword)
{
	if (Validation::passwordValidation(newPassword)) {
		this->password = newPassword;
	}
}

void Client::setBalance(double newBalance)
{
	if (Validation::balanceValidation(newBalance)) {
		this->balance = newBalance;
	}
}

double Client::getBalance() const
{
	return balance;
}

void Client::deposit(double amount)
{
	balance += amount;
}

void Client::withdraw(double amount)
{
	if (Validation::balanceValidation(balance - amount)) {
		balance -= amount;
	}
}

void Client::transferTo(double amount, Client& client)
{
	if (Validation::balanceValidation(balance - amount)) {
		balance -= amount;
		client.deposit(amount);
	}
}
void Client::checkBalance()const {
	std::cout << "Current balance: " << balance << " EGP" << std::endl;
}

void Client::display() const{
 	std::cout << "Name: " << name << std::endl;
	std::cout << "ID: " << id << std::endl;
	std::cout << "Password: " << password << std::endl;
	std::cout << "Balance: " << balance << " LE" << std::endl;
}

std::string Client::getName()const
{
	return name;
}

string Client::getPassword()const
{
	return password;
}

int Client::getId()const
{
	return id;
}

