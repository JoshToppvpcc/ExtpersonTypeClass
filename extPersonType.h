#pragma once
#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <string>
#include <iostream>
#include "personType.h"     // Include the base class
#include "dateType.h"       // Include dateType for the birthday
#include "addressType.h"    // Include addressType for address management

class extPersonType : public personType {
private:
    std::string phoneNumber;  // Phone number
    std::string relationship;  // Relationship tag (Family, Friend, Business)
    dateType birthday;         // Birthday as dateType
    addressType address;       // Address as addressType

    // Validation for relationship
    bool isValidRelationship(const std::string& rel) const {
        return (rel == "Family" || rel == "Friend" || rel == "Business");
    }

public:
    // Default constructor
    extPersonType()
        : personType(), phoneNumber(""), relationship("Friend"),
        birthday(), address() // Initialize addressType
    {
    }

    // Parameterized constructor
    extPersonType(const std::string& fName, const std::string& lName,
        int birthMonth, int birthDay, int birthYear,
        const std::string& street, const std::string& city,
        const std::string& state, const std::string& zip,
        const std::string& phone, const std::string& rel)
        : personType(fName, lName, street, city, state, zip), // Initialize base class
        phoneNumber(phone), relationship(rel),
        birthday(birthMonth, birthDay, birthYear), address(street, city, state, zip)
    {
        // Validate relationship
        if (!isValidRelationship(rel)) {
            relationship = "Friend"; // Default if invalid
            std::cout << "Invalid relationship. Defaulting to 'Friend'." << std::endl;
        }
    }

    // Getters
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getRelationship() const { return relationship; }

    // Setters
    void setPhoneNumber(const std::string& phone) { phoneNumber = phone; }
    void setRelationship(const std::string& rel) {
        if (isValidRelationship(rel)) {
            relationship = rel;
        }
        else {
            std::cout << "Invalid relationship. Value not changed." << std::endl;
        }
    }

    // Access the birth month from the dateType
    int getBirthMonth() const {
        return birthday.getMonth(); // Assuming birthday has a getMonth() function
    }

    // Print function to display the person's details
    void print() const {
        personType::print(); // Call the print function from personType
        std::cout << "Birthday: " << birthday.getDay() << "-"
            << birthday.getMonth() << "-" << birthday.getYear() << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Relationship: " << relationship << std::endl;
    }
};

#endif // EXTPERSONTYPE_H