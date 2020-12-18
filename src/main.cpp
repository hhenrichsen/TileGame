#include "Includes.hpp"
#include "World.hpp"
#include "Tile.hpp"
#include <SFML/Graphics.hpp>

Tile generateTile(World* world, int x, int y) {
    return Tile(world, x, y);
}

int main() {
    World world = World(5, 5, generateTile);
    world.tick();
    return 0;
}
