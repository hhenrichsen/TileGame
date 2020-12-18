//
// Created by Hunter on 12/18/2020.
//

#include "Tile.hpp"

Tile::Tile(World * world, const int x, const int y) : world(world), x(x), y(y) { }

int Tile::getX() const {
    return x;
}

int Tile::getY() const {
    return y;
}

World* Tile::getWorld() const {
    return world;
}

void Tile::tick() const {
    g_logger.log(LogLevel::SILLY, "Ticking tile " + std::to_string(x) + ", " + std::to_string(y));
}
