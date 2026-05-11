#include "map.h"
#include <iostream>

Map::Map(int width, int height, Player* player)
    :width(width),height(height),playerPtr(player){
    player->setX(1);
    player->setY(1);

    grid = new char*[height];
    for (int i = 0; i < height; i++){
        grid[i] = new char[width];
    }

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1){
                grid[i][j] = '#';
            }else{
                grid[i][j] = ' ';
            }
        }
    }
}

Map::~Map(){
    for (int i = 0; i < height; i++){
        delete[] grid[i];
    }
    delete[] grid;
}

void Map::draw() const{

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i == playerPtr -> getY() && j == playerPtr -> getX()){
                cout << '@';
            }else{
                cout << grid[i][j];
            }
        }
        cout << endl;
    }
}

bool Map::isWall(int x, int y) const{
    if(grid[y][x] == '#' | y <= 0 || x <= 0 || y > height || x > width){
        cout << "TRUE" << endl;
        return true;
    }
    cout << "FALSE" << endl;
    return false;
}
