//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - thing class
#include <iostream>
#include <vector>
#include "Thing.h"
using namespace std;

Thing::Thing() {
    name = "";
    location = "";
    description = "";
}

Thing::Thing(string name, string location, string description) {
    this->name = name;
    this->location = location;
    this->description = description;
}

string Thing::getName() {
    return name;
}

string Thing::getLocation() {
    return location;
}

void Thing::setName(string name) {
    this->name = name;
}

void Thing::setLocation(string location) {
    this->location = location;
}

string Thing::getDescription() {
    return description;
}

void Thing::setDescription(string line) {
    description = line;
}