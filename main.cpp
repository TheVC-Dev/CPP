#include "player.h"
#include "item.h"
#include "inventory.h"
#include "map.h"

int main(){
    // Player position
    Player p("Hero", 100, 10);
    p.getX();   // 0
    p.getY();   // 0
    p.setX(5);
    p.setY(3);
    p.getX();   // 5
    p.getY();   // 3

    // Map basics
    Player hero("Hero", 100, 10);
    Map m(10, 8, &hero);
    hero.getX();         // 1 (set by Map constructor)
    hero.getY();         // 1

    m.isWall(0, 0);      // true  (top-left corner)
    m.isWall(9, 0);      // true  (top-right corner)
    m.isWall(1, 1);      // false (interior)
    m.isWall(5, 4);      // false (interior)
    m.isWall(-1, 0);     // true  (out of bounds)
    m.isWall(10, 0);     // true  (out of bounds)

    // Small 5x4 map drawn:
    // #####
    // #@..#
    // #...#
    // #####
    return 0;
}
