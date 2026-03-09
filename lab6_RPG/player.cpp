#include "Player.h"

Player::Player(){
    name = "Hero";
    HP = 100;
    maxHP = 100;
    atkPwr = 10;
}

Player::Player(string n, int H, int ap){
    name = n;
    HP = H;
    maxHP = H;
    atkPwr = ap;
}

Player::~Player(){
    cout << "Player has been destroyed." << endl;
}

void Player::takeDMG(int DMG){
    if (HP && DMG > 0){

        if ((HP-DMG) > 0){
            cout << "-- " << name << " takes " << DMG << " damage! --" << endl;
            HP -= DMG;
            displ_stat();
        }else{
            HP = 0;
            cout << name << " has fallen." << endl;
        }
    }else{
        cout << "-- Attack on " << name << " had no effect! --" << endl;
        displ_stat();
            
    }
    cout << endl;
}

string Player::getName() const{
    return name;
}

int Player::getHP() const{
    return HP;
}

void Player::displ_stat() const{
    cout << "[" << name << "]" << " - HP: " << HP << "/" << maxHP << endl;
}
