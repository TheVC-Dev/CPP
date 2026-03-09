#include "Player.h"
#include "Player.cpp" 

int main(){

    Player player1;
    Player player2("Wizard", 120, 10);
     
    cout << "-- Player Stats --" << endl;
    player1.displ_stat();
    player2.displ_stat();
    cout << endl;

    player1.takeDMG(60);
    player2.takeDMG(30);


    player1.takeDMG(60);
    player2.takeDMG(6);

    player1.takeDMG(60);
    player2.takeDMG(60);

    return 0;
}
