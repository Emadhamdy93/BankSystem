#include "Person.h"
Person::Person(string Name, string Pass, int ID) {
	if (Validation::nameValidation(Name))
		name = Name;
	if (Validation::passwordValidation(Pass))
		password = Pass;
	id = ID;
}

//Setters
void Person::setName(std::string newName)
{
	if (Validation::nameValidation(newName)) {
		this->name = newName;
	}
}
void Person::setPassword(std::string newPassword)
{
	if (Validation::passwordValidation(newPassword)) {
		this->password = newPassword;
	}
}
void Person::setID(int newid)
{
	id = newid;
}
