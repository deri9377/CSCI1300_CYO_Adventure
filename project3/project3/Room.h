//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - Room class
#include <iostream>
#include <vector>
#include "Thing.h"
using namespace std;

class Room {
    private: //private variables
        vector<Thing> items; //list of all the Things in the room
        string roomName; //name of the room
        vector<string> neighbors; //rooms that are connected to this room
        bool locked; //if the door is locked
        bool lightsOn; //if the lights are on
        bool match(string string1, string string2); //function that compares to strings case insensitive
        
    public:
        Room(); //default constructor
        Room(string name, vector<Thing> items, vector<string> neighbors, bool locked, bool lightsOn); //paramatized constructor
        string getRoomName(); //return the name of the room
        void setRoomName(string name); //sets the name of the room
        bool isLocked(); //gets if the rooms locked
        void setIsLocked(bool locked); //sets if the room is locked
        bool isLightsOn(); //gets if the lights are on
        void setIsLightsOn(bool on); //sets if the lights are on
        Thing getItemAt(int i); //gets the Thing at that location in the vector
        int getInventorySize(); //gets how many things are in the room
        int removeItem(string name); //removes the item based on the name
        int addItem(Thing name); //adds an item to the room
        void displayItems(); //displays all the items in the room
        void addNeighbor(string name); //adds a neighbor to the neighbor vector
};