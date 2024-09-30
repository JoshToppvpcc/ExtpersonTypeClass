#pragma once
#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>
#include <iostream>

class addressType {
private:
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;

public:
    // Default constructor
    addressType()
        : streetAddress(""), city(""), state(""), zipCode("") {}

    // Parameterized constructor
    addressType(const std::string& street, const std::string& city,
        const std::string& state, const std::string& zip)
        : streetAddress(street), city(city), state(state), zipCode(zip) {}

    // Getters for address components
    std::string getStreet() const { return streetAddress; }
    std::string getCity() const { return city; }
    std::string getState() const { return state; }
    std::string getZip() const { return zipCode; }

    // Print function to display the address
    void print() const {
        std::cout << streetAddress << ", " << city << ", "
            << state << " " << zipCode << std::endl;
    }
};

#endif // ADDRESSTYPE_H