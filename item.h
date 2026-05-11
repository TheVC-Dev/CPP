#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
using namespace std;

class Item{
private:
    static int totalItems;
    string name;
    int value;   

public:
    //constructors & destructor
    Item(string name = "Scrap", int value = 0);
    ~Item();
    
    //Static Methods
    static int getTotalItems();
    static void incrementTotalItems();
     
    //Getters
    string getName() const;
    int getValue() const;
    void display() const;

};

#endif
