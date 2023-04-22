/**
 * @file main.cpp
 * @author Anthony D.
 * @date 21 avril 2023
 * 
 * @brief Main file of the contact collection program
 * @details This programme allows the user to keep a registery
 * of his/her phone contact (number, name, ..)
 * 
 * @note TODO : add email and home address for it to be more completed
*/

#include "fct.hpp"


/** @brief main function */
int main (int argc, char * argv[]) {

    GlobalMap contacts;    

    while (true) {

        // wait for user input in the main menu 
        uint8_t userChoice = WelcomeMenu();

        switch (userChoice)
        {
        case '1': // Show a particular contact to user
            DisplayContact(contacts);
            break;

        case '2': // create and add a contact to registery
            CreateContact(contacts);
            break;

        case '3': // delete a contact to registery
            DeleteContact(contacts);
            break;
        
        default:
            std::cout << "Please choose an available option !" << std::endl;
            break;
        }
        
    }
        


    return EXIT_SUCCESS;
}