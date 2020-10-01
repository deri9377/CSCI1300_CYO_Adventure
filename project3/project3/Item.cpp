//CSCI 1300 Fall 2019
//Author: Devin Riess
//Recitation 304 - Thanika
//Project 3 - Item class
#include <iostream>
#include <vector>
#include "Item.h"
using namespace std;

Item::Item()
    :Thing("", "", "")
{
    canPickUp = true;
}

Item::Item(string name, string location, bool pickUp)
    : Thing(name, location, "")
{
    canPickUp = pickUp;
}

bool Item::canBePickedUp() {
    return canPickUp;
}

void Item::setCanBePickedUp(bool x) {
    canPickUp = x;
}