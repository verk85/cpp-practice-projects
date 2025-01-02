#ifndef GAMEENTITY_HPP
#define GAMEENTITY_HPP

#include <string>

class GameEntity {
    //exposed constructor and method
    public:
        // Constructor that initializes game entity variables
        GameEntity(const std::string& name, int health, int attackPower, int defensePower, float positionX, float positionY, float positionZ);

        // Member functions
        void takeDamage(int damage);

        void attack(GameEntity& target);

        void moveLeft();

        void moveRight();

        void moveUp();

        void moveDown();

        void jump(float deltaZ);

        bool isAlive();

        void displayStatus() const;

    // internal variables
    private:
        std::string name;
        int health, attackPower, defensePower;
        float positionX, positionY, positionZ;

};

#endif