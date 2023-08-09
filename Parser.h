#pragma once
#include "Admin.h"
#include"Client.h"
#include<sstream>
#include<string>
#include<vector>
class Parser {
	static vector<string> split(string line) {
		std::stringstream ss(line);
		string token{};
		vector<string> result;
		while (getline(ss, token, '&'))
			result.push_back(token);
		return result;
	}
public:
	static Client parseToClient(string line) {
		std::vector<string> result = split(line);

		string name = result[0];
		int id = std::stoi(result[1]);
		string password = result[2];
		double balance = std::stod(result[3]);

		Client client(name,id,password,balance);
		return client;
	}
	static Employee parseToEmployee(string line) {
		std::vector<string> result = split(line);

		string name = result[0];
		int id = std::stoi(result[1]);
		string password = result[2];
		double salaary = std::stod(result[3]);

		Employee employee(name, id, password, salaary);
		return employee;
	}
	static Admin parseToAdmin(string line) {
		std::vector<string> result = split(line);

		string name = result[0];
		int id = std::stoi(result[1]);
		string password = result[2];
		double salary = std::stod(result[3]);

		Admin admin(name, id, password, salary);
		return admin;
	}
};