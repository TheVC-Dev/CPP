#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "inventory.h"

using namespace std;

class Player{
private:
    string name;
    int HP; 
    int maxHP;
    int atkPwr;
    Inventory inv;
    int x;
    int y;

public:
    Player(); //default constructor
    Player(string n, int H, int ap);
    ~Player();
      
    void takeDMG(int DMG);
    string getName() const;
    int getHP() const;  
    int getMaxHP() const;
    int getAtkPwr() const;

    void displ_stat() const;

    void addItem(const Item& item);
    void showInventory() const;

    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
};

#endif
