//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - Container class
#include <iostream>
#include <vector>
#include "Thing.h"
using namespace std;

class Container : public Thing {
    private:
        vector<Item> items;
        bool open;
        match(string string1, string string2);
    
    public:
        Container();
        Container(string name, string location, vector<Item> items, bool open);
        bool isOpen();
        void setIsOpen(bool isOpen);
        Item getItemAt(int i);
        int getInventorySize();
        int removeItem(string name);
        int addItem(Item name);
        void displayItems();
    
};