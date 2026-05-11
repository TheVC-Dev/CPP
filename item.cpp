#include "item.h"

//Initialize the static variable
int Item::totalItems = 0;


//Constructor & destructor  

Item::Item(string n, int val)
    :name(n), value(val){
        totalItems++;
}

Item::~Item(){
    totalItems--;
}


//Static Methods
int Item::getTotalItems(){
    return totalItems;
}

void Item::incrementTotalItems(){
    totalItems++;
}

//Getters
string Item::getName() const{
    return name;
}

int Item::getValue() const{
    return value;
}

void Item::display() const{
    cout << "[" << name << "]" << " (Value: " << value << ")" << endl;
}

