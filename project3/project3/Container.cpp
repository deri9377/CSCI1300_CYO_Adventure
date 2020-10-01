//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - Container class
#include <iostream>
#include <vector>
#include "Thing.h"
#include "Container.h"
using namespace std;

Container::Container() {
    name = "";
    location = "";
    bool open = false;
}

Container::Container(string name, string location, vector<Item> items, bool open) {
    this-> name = name;
    this-> location = location;
    this-> items = items;
    this-> open = open;
}

bool Container::isOpen() {
    return open;
}

void Container::setIsOpen(bool isOpen) {
    open = isOpen;
}

Item Container::getItemAt(int i) {
    return items[i];
}

int Container::getInventorySize() {
    return items.size();
}

int Container::removeItem(string name) {
    int index = -1;
    if (items.size() == 0) {
        return -2;
    }
    for (int i = 0; i < items.size(); i++) {
        if (match(items[i].getName(), name)) {
            index = i;
            items[i] = items[items.size() - 1];
            items.push_pop();
            return 1;
        }
    }
    return -1;
}

int Container::addItem(Item item) {
    items.push_back(item);
    return 1;
}

/*
    Algorithm: determines if the two strings are equal, case-insensitive
    1)check if the strings are the same length
    2)compare each character in the strings
    input: string1, string2
    output: null
    return: bool
*/
bool Container::match(string string1, string string2) {
    bool match = true;
    if (string1.length() == string2.length()) { //if the length of username == the length of the given username
        for (int i = 0; i < string1.length(); i++) { //loop through each index of the username
            char s1Char = string1[i]; //char at user username
            char s2Char = string2[i]; //char at given username
            if (toupper(s1Char) != toupper(s2Char)) { //see if the upper case of each are equal
                match = false; //if its not set match to false
                break; //break out of the loop
            }
        }
    } else {
        return false; //return false
    }
    return match; //return match
}

void Container::displayItems() {
    if(items.size() > 0) {
        cout << "The " << name << " contains:" << endl;
        for (int i = 0; i < items.size(); i++) {
            cout << items[i].getName() << endl;
        }
    } else {
        cout << "The " << name << " is empty:"
    }
}
