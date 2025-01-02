#include "GameEntity.hpp"

#include <iostream>
#include <iomanip>

GameEntity::GameEntity(const std::string& name, int health,  int attackPower, int defensePower, float positionX, float positionY, float positionZ)
    : name(name), health(health), attackPower(attackPower), defensePower(defensePower), positionX(positionX), positionY(positionY), positionZ(positionZ) {}

void GameEntity::takeDamage(int damage){
    health -= (damage - defensePower);
    if( health < 0 ) health = 0;
}

void GameEntity::attack(GameEntity& target){
    target.takeDamage(attackPower);
    std::cout << name << " Attacked" << std::endl;
}

void GameEntity::moveLeft(){
    positionX--;
}
void GameEntity::moveRight(){
    positionX++;
}
void GameEntity::moveDown(){
    positionY--;
}
void GameEntity::moveUp(){
    positionY++;
}

void GameEntity::jump(float deltaZ){
    positionZ += deltaZ;
}

bool GameEntity::isAlive(){
    return health > 0;
}

void GameEntity::displayStatus() const{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(15) << "Entity: " << name << std::endl; 
    std::cout << std::left << std::setw(15) << "Health: " << health << std::endl; 
    std::cout << std::left << std::setw(15) << "Position: " << std::fixed << std::setprecision(2) << positionX << " , " << positionY << " , " << positionZ << std::endl; 
}
