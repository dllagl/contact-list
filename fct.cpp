/**
 * @file fct.cpp
 * @author Anthony D.
 * @date 21 avril 2023
 * 
 * @brief Contains the functions' core
 * @see fct.hpp
*/
#include "fct.hpp"


void CreateContact(GlobalMap &gl) {

    putchar('\n');

    // create new contact 
    Contact newContact;

    // new variable init for user input
    std::string newName;
    std::cout << "Please enter the contact's name : " << std::endl;
    std::cin >> newName;

    // check if contact already exists (TODO)


    // ask user for phone number 
    std::string newNumber;
    std::cout << "Please enter the contact's phone number : ";
    std::cin >> newNumber;

    // create contact
    newContact.insert({NAME,newName});
    newContact.insert({NUMBER, newNumber});

    // add contact to registery
    gl.insert({newName, newContact});
    
}


void DisplayContact(GlobalMap &gl) {

    putchar('\n');
    // ask user contact to check
    std::string contactToCheck;
    std::cout << "Which contact do you wanna check? "; 
    std::cin >> contactToCheck;


    // parse registery 
    bool doesContactExists = false;
    for (auto const &c : gl) {

        // check if user exists 
        if (contactToCheck == c.first) {
            
            doesContactExists = true;

            // display info if it exists
            for (auto const &info : c.second) {
                std::cout << info.first << " : " << info.second << std::endl;
            } 
        }
    }

    // warning if contact is not found 
    if (!doesContactExists) {
        std::cout << "Contact has not been found in the registery." << std::endl;
    }

}


uint8_t WelcomeMenu() {

    std::cout << "\n\n";
    std::cout << "         Welcome to your contact registery !" << std::endl;
    putchar('\n');

    std::cout << "[1] Search for contact" << std::endl;
    std::cout << "[2] Add contact to registery" << std::endl;
    std::cout << "[3] Delete contact from registery (TODO)" << std::endl;


    uint8_t userChoice;
    std::cout << "Choose an available option : ";
    std::cin >> userChoice;
    fflush(stdin);

    return userChoice;
}

