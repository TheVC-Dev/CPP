#include "inventory.h"
#include <iostream>

Inventory::Inventory(int capacity)
    :items(new Item[capacity]), itemCount(0), capacity(capacity){
}

Inventory::~Inventory(){
    delete[] items;
}

bool Inventory::addItem(const Item& item){
    if(itemCount < capacity){
        items[itemCount] = item;
        itemCount++;
        Item::incrementTotalItems();
        return true;
    }
    return false;
}

void Inventory::display() const{

    // Inventory (2/5):
    cout << "Inventory(" << itemCount << "/" << capacity << "): " << endl;
    for(int i = 0; i < itemCount; i++){
        cout << " ";
        items[i].display();
    }
}

