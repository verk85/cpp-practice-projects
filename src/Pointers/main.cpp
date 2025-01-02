#include <iostream>

int main() {
    int health = 100;
    int* pHealth = &health;

    double damage = 50.5;
    double* pDamage = &damage;

    std::string playerName = "Hero";
    std::string* pPlayerName = &playerName;

    // Print the values
    std::cout << "Health: " << *pHealth << std::endl;
    std::cout << "Damage: " << *pDamage << std::endl;
    std::cout << "Player Name: " << *pPlayerName << std::endl;

    return 0;
}
