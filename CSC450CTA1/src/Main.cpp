/*
 * Main.cpp
 *
 *  Created on: Feb 18, 2024
 *      Author: marsh
 */

#include <iostream>

using namespace std;

class Person {
public:

    string firstName;
    string lastName;
    string streetAddress;
    string city;
    int zip;
};

int main()
{
	Person myPerson;

	myPerson.firstName = "Dustin";
	myPerson.lastName = "Robinson";
	myPerson.streetAddress = "555 5th Street";
	myPerson.city = "Montrose";
	myPerson.zip = 81401;

	cout << myPerson.firstName <<endl;
	cout << myPerson.lastName <<endl;
	cout << myPerson.streetAddress <<endl;
	cout << myPerson.city <<endl;
	cout << myPerson.zip;

	return 0;
}



