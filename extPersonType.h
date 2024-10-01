#pragma once
#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <iostream>
#include <string>
#include "dateType.h" 



class extPersonType {
private:
    std::string firstName;
    std::string lastName;
    std::string relationship;
    dateType birthDate;
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    std::string phoneNumber;

public:
    extPersonType() {}  // Default constructor

    // Parameterized constructor
    extPersonType(std::string fName, std::string lName, std::string rel, dateType bDate, std::string street,  std::string city,
        std::string state, std:: string zip, std::string phone  )
        : firstName(fName), lastName(lName), relationship(rel),city(city), state(state), zipCode(zip), birthDate(bDate) {}

    // Accessor and mutator functions
    std::string getLastName() const { return lastName; }
    std::string getFirstName() const { return firstName; }
    std::string getRelationship() const { return relationship; }
    dateType getBirthDate() const { return birthDate; }
    std::string getStreetAddress() const { return streetAddress; }
    std::string getCity() const { return city;  }
    std::string getState() const { return state; }
    std::string getZipCode() const { return zipCode; }
    std::string getPhoneNumber() const { return phoneNumber; }
    // Print function for extPersonType
    void print() const {
        std::cout << firstName << " " << lastName << " - " << relationship << " - Birthday: ";
        birthDate.print();
        std::cout << streetAddress <<"," << city << "," << state << "," << zipCode<< "," << phoneNumber << std::endl;
    
    }
};

#endif // EXTPERSONTYPE_H