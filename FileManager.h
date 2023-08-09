#pragma once
#include<fstream>
#include"Parser.h"
#define CLIENTFILE "Client.txt"
#define EMPLOYEEFILE "Employee.txt"
#define ADMINFILE "Admin.txt"
class FileManager {
public:

	static void addClient(const Client& client) {
		std::ofstream file;
		file.open(CLIENTFILE, std::ios::app);
		if (file.is_open())
		{
			file << client.getName() << '&' << client.getId() << '&' << client.getPassword() << '&' << client.getBalance() << '\n';
			file.close();
		}
		else
			std::cerr << "Failed to open Client.txt for writing." << std::endl;
	}

	static void addEmployee(const Employee& employee) {
		std::ofstream file;
		file.open(EMPLOYEEFILE, std::ios::app);
		if (file.is_open())
		{
			file << employee.getName() << '&' << employee.getId() << '&' << employee.getPassword() << '&' << employee.getSalary() << '\n';
			file.close();
		}
		else
			std::cerr << "Failed to open Employee.txt for writing." << std::endl;
	}

	static void addAdmin(const Admin& admin) {
		std::ofstream file;
		file.open(ADMINFILE, std::ios::app);
		if (file.is_open())
		{
			file << admin.getName() << '&' << admin.getId() << '&' << admin.getPassword() << '&' << admin.getSalary() << '\n';
			file.close();
		}
		else
			std::cerr << "Failed to open Admin.txt for writing." << std::endl;
	}

	static std::vector<Client> getAllClients() {
		std::vector <Client> clients;
		std::ifstream file;
		file.open(CLIENTFILE);
		string line{};
		if (file.is_open())
		{
			while (getline(file, line))
				clients.push_back(Parser::parseToClient(line));
		}
		else
			std::cerr << "Couldn't open Client.txt file " << std::endl;
		return clients;
	}

	static std::vector<Employee> getAllEmployees()
	{
		std::vector <Employee> employee;
		std::ifstream file;
		file.open(EMPLOYEEFILE);
		string line{};
		if (file.is_open())
		{
			while (getline(file, line))
				employee.push_back(Parser::parseToEmployee(line));
		}
		else
			std::cerr << "Couldn't open Employee.txt file " << std::endl;
		return employee;
	}
	static 	std::vector<Admin> getAllAdmins() {
		std::vector <Admin> admin;
		std::ifstream file;
		file.open(ADMINFILE);
		string line{};
		if (file.is_open())
		{
			while (getline(file, line))
				admin.push_back(Parser::parseToAdmin(line));
		}
		else
			std::cerr << "Couldn't open Admin.txt file " << std::endl;
		return admin;
	}

	static 	void removeAllClients() {
		std::ofstream ofs;
		ofs.open(CLIENTFILE, std::ofstream::out | std::ofstream::trunc);
		ofs.close();
	}

	static void removeAllEmployees() {
		std::ofstream ofs;
		ofs.open(EMPLOYEEFILE, std::ofstream::out | std::ofstream::trunc);
		ofs.close();
	}

	static void removeAllAdmins() {
		std::ofstream ofs;
		ofs.open(ADMINFILE, std::ofstream::out | std::ofstream::trunc);
		ofs.close();
	}

};

