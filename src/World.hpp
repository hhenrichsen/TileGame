//
// Created by Hunter on 12/18/2020.
//

#ifndef TILEGAME_WORLD_HPP
#define TILEGAME_WORLD_HPP

#include "Types.hpp"
#include "Includes.hpp"

class World {
private:
    int sizeX;
    int sizeY;
    std::vector<std::vector<Tile>> world;
public:
    World(int sizeX, int sizeY, const std::function<Tile(World *, int, int)> &initializer);
    void tick() const;
};


#endif //TILEGAME_WORLD_HPP
