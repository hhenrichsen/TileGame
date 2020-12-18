//
// Created by Hunter on 12/18/2020.
//

#ifndef TILEGAME_TILE_HPP
#define TILEGAME_TILE_HPP


#include "World.hpp"

class Tile {
private:
    int x;
    int y;
    World* world;
public:
    Tile(World*, int x, int y);
    int getX() const;
    int getY() const;
    World * getWorld() const;
    void tick() const;
};


#endif //TILEGAME_TILE_HPP
