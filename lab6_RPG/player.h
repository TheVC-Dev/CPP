#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player{
private:
    string name;
    int HP; 
    int maxHP;
    int atkPwr;

public:
    Player(); //default constructor
    Player(string n, int H, int ap);
        
    ~Player();
      
    void takeDMG(int DMG);
     
    string getName() const;
    int getHP() const;
     
    void displ_stat() const;

};

#endif
