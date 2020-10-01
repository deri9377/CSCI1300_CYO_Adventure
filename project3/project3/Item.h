//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - Item class
#include <iostream>
#include <vector>
#include "Thing.h"
using namespace std;

class Item: public Thing {
    private:
        bool canPickUp;
    
    public:
        Item();
        Item(string name, string location, bool pickUp);
        bool canBePickedUp();
        void setCanBePickedUp();

};