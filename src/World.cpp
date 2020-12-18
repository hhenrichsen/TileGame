//
// Created by Hunter on 12/18/2020.
//

#include "World.hpp"
#include "Tile.hpp"

World::World(int sizeX, int sizeY, const std::function<Tile(World*, int, int)>& initializer) : sizeX(sizeX), sizeY(sizeY) {
    for (int y = 0; y < sizeY; y++) {
        world.emplace_back(std::vector<Tile>());
        for (int x = 0; x < sizeX; x++) {
            world[y].emplace_back(initializer(this, x, y));
        }
    }
}

void World::tick() const {
    for (int y = 0; y < sizeY; y++) {
        for (int x = 0; x < sizeX; x++) {
            world[y][x].tick();
        }
    }
}
