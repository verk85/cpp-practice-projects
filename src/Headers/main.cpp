#include "./headers/GameEntity.hpp"

#include <iostream>
#include <iomanip>

int main(){
    std::cout << "Game Entity main." << std::endl;
    GameEntity hero("Ratoncin", 100, 20, 5, 0.0f, 0.0f, 0.0f);
    GameEntity enemy("Ant", 100, 10, 2, 0.0f, 0.0f, 0.0f);

    hero.displayStatus();
    enemy.displayStatus();
    
    while (hero.isAlive() && enemy.isAlive()){
        hero.moveLeft();
        enemy.moveRight();

        hero.attack(enemy);
        enemy.attack(hero);

        hero.displayStatus();
        enemy.displayStatus();
    };

    if(hero.isAlive()){
        std::cout << " Ratoncin Won!" << std::endl;
    }else {
        std::cout << " Ant Won!" << std::endl;
    }
    
    return 0;
}