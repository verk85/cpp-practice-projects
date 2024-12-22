#include "./headers/GameEntity.hpp"

#include <iostream>
#include <iomanip>

int main(){
    std::cout << "Game Entity main." << std::endl;
    GameEntity hero("Ratoncin",100,0.0f,0.0f);

    hero.displayStatus();
    
    return 0;
}