//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - Room class
#include <iostream>
#include <vector>
#include "Room.h"
using namespace std;

Room::Room() {
    roomName = "";
    locked = false;
    lightsOn = true;
    
}

Room::Room(string name, vector<Thing> items, vector<string> neighbors, bool locked, bool lightsOn) {
    this->roomName = name;
    this->items = items;
    this->neighbors = neighbors;
    this->locked = locked;
    this->lightsOn = lightsOn;
}

string Room::getRoomName() {
    return roomName;
}

void Room::setRoomName(string name) {
    roomName = name;
}

bool Room::isLocked() {
    return locked;
}

void Room::setIsLocked(bool locked) {
    this->locked = locked;
}

bool Room::isLightsOn() {
    return lightsOn;
}

void Room::setIsLightsOn(bool on) {
    lightsOn = on;
}

Thing Room::getItemAt(int i) {
    return items[i];
}

int Room::getInventorySize() {
    return items.size();
}

int Room::removeItem(string name) {
    int index = -1;
    if (items.size() == 0) {
        return -2;
    }
    for (int i = 0; i < items.size(); i++) {
        if (match(items[i].getName(), name)) {
            index = i;
            items[i] = items[items.size() - 1];
            items.pop_back();
            return 1;
        }
    }
    return -1;
}

int Room::addItem(Thing item) {
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
bool Room::match(string string1, string string2) {
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

void Room::displayItems() {
    if(items.size() > 0) {
        cout << "The " << roomName << " contains:" << endl;
        for (int i = 0; i < items.size(); i++) {
            cout << items[i].getName()  << " ";
        }
    } else {
        cout << "The " << roomName << " is empty.";
    }
}

void Room::addNeighbor(string name) {
    neighbors.push_back(name);
}
