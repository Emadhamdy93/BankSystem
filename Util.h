#pragma once
#include<iostream>
class Validation {
public:
	static bool isAlphabetic(const std::string value)
	{
		for (auto s : value)
		{
			if (!isalpha(s) && s != ' ')
				return false;
		}
		return true;
	}
	//Check the name min size 5 and max size 20
	//Check if it's aplhabetic or not
	static bool nameValidation(const std::string newName) {
		if (newName.length() >= 5 && newName.length() <= 20) {
			if (isAlphabetic(newName))
				return true;
			else {
				std::cout << "Invalid name. The name must contain only alphabetic characters." << std::endl;
				return false;
			}
		}
		else {
			std::cout << "Invalid name. The name must be between 5 and 20 characters long." << std::endl;
			return false;
		}
	}
	//Check the Password min size and max size 20
	static bool passwordValidation(const std::string newPassword) {
		if (newPassword.length() >= 8 && newPassword.length() <= 20) {
			return true;
		}
		else {
			std::cout << "Invalid password. The password must be between 8 and 20 characters long." << std::endl;
			return false;
		}
	}
	//Check the Blanace Value min 1500
	static bool balanceValidation(const double newBalance) {
		if (newBalance > 1500)
			return true;
		else {
			std::cout << "Invalid Balance. The Balance must be more than 1500." << std::endl;
			return false;
		}
	}

	//Check the salary Value min 500
	static bool SalaryValidation(const double newSalary) {
		if (newSalary > 5000)
			return true;
		else {
			std::cout << "Invalid Salary. The Balance must be more than 5000." << std::endl;
			return false;
		}
	}
};

