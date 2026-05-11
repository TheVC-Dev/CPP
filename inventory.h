#pragma once 
#include "item.h"

class Inventory{
private:
    Item* items;
    int capacity;
    int itemCount;

public:
    Inventory(int capacity);
    ~Inventory();
    bool addItem(const Item& item);
    void display() const;

};
