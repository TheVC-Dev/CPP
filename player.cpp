#include "player.h"


Player::Player()
    :name("Hero"), HP(100), maxHP(100), atkPwr(10), inv(10), x(0), y(0){
        setX(0);
        setY(0);
}

Player::Player(string n, int H, int ap)
    :name(n), HP(H), maxHP(H), atkPwr(ap), inv(10), x(0), y(0){
        setX(0);
        setY(0);
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

int Player::getMaxHP() const{
    return maxHP;
}

int Player::getAtkPwr() const{
    return atkPwr;
}

void Player::displ_stat() const{
    cout << "[" << name << "]" << " - HP: " << HP << "/" << maxHP << endl;
}

void Player::addItem(const Item& item){
    inv.addItem(item);
}

void Player::showInventory() const{
    inv.display();
}

int Player::getX() const{
    cout << "getX: " << x <<endl;
    return x;
}

int Player::getY() const{
    cout << "getY: " << y <<endl;
    return y;
}

void Player::setX(int x){
    this->x = x;
}

void Player::setY(int y){
    this->y = y;
}
