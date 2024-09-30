#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
#include <iostream>

class personType {
protected:
    std::string firstName;
    std::string lastName;
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;

public:
    // Default constructor
    personType()
        : firstName(""), lastName(""), streetAddress(""), city(""), state(""), zipCode("") {}

    // Parameterized constructor
    personType(const std::string& fName, const std::string& lName,
        const std::string& street, const std::string& city,
        const std::string& state, const std::string& zip)
        : firstName(fName), lastName(lName), streetAddress(street),
        city(city), state(state), zipCode(zip) {}

    // Accessor functions
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }

    // Print function to display person's name and address
    virtual void print() const {
        std::cout << firstName << " " << lastName << std::endl;
        std::cout << streetAddress << ", " << city << ", "
            << state << " " << zipCode << std::endl;
    }
};

#endif // PERSONTYPE_H
