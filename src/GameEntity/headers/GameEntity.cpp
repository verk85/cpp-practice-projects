#include "GameEntity.hpp"

#include <iostream>
#include <iomanip>

GameEntity::GameEntity(const std::string& name, int health, float positionX, float positionY)
    : name(name), health(health), positionX(positionX), positionY(positionY) {}

void GameEntity::takeDamage(int damage){
    health -= damage;
    if( health < 0 ) health = 0;
}

void GameEntity::move(float deltaX, float deltaY){
    positionX += deltaX;
    positionY += deltaY;
}

void GameEntity::displayStatus() const{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(15) << "Entity: " << name << std::endl; 
    std::cout << std::left << std::setw(15) << "Health: " << health << std::endl; 
    std::cout << std::left << std::setw(15) << "Position: " << std::fixed << std::setprecision(2) << positionX << " , " << positionY << std::endl; 
}
