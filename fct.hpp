/**
 * @file fct.hpp
 * @author Anthony D.
 * @date 21 avril 2023
 * 
 * @brief header file for registery related function
 * @see fct.cpp
*/

#ifndef DEF_FCT_HPP
#define DEF_FCT_HPP

#include <iostream>
#include <map>
#include <string>
#include <stdint.h>

typedef std::map<std::string,std::string> Contact;
typedef std::map<std::string,Contact > GlobalMap;

#define NAME "Name"
#define NUMBER "Phone number"
#define EMAIL "E-mail"
#define ADDRESS "Home address"

/** 
 * @brief Create contact and add it in the global registery
 * @param gl Reference to the global registery containing contacts
*/
void CreateContact(GlobalMap &gl);

/** 
 * @brief Display a particular contact via input user
 * @param gl Reference to the global registery containing contacts
*/
void DisplayContact(GlobalMap &gl);

/**
 * @brief Delete contact from global registery
 * @param gl Reference to the global registery containing contacts
*/
void DeleteContact(GlobalMap &gl);

/**
 * @brief ask user whether to add email to contact or not
 * @param co Reference to the contact of interest in the registery
*/
void addEmailToContact(Contact &co);

/**
 * @brief Welcome menu
 * @details User has to choose between different options 
 * (add contact, search contact, delete contact, ..)
 * 
 * @return An integer corresponding to an option in the menu
*/
uint8_t WelcomeMenu();


#endif // DEF_FCT_HPP