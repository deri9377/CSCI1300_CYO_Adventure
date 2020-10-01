//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - thing class
#include <iostream>
#include <vector>
using namespace std;

class Thing {
    private:
        string name;
        string location;
        string description;
        
    public:
        Thing();
        Thing(string name, string location, string description);
        string getName();
        string getLocation();
        void setName(string name);
        void setLocation(string location);
        string getDescription();
        void setDescription(string line);
};