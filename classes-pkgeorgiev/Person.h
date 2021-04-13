#pragma once
#include <string>

class Person
{
public:
	std::string getFullName();
private:
	std::string firstName;
	std::string lastName;
	int age;
};

struct PersonStruct {
	std::string firstName;
	std::string lastName;
	int age;
};

