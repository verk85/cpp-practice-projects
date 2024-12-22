#ifndef GAMEENTITY_HPP
#define GAMEENTITY_HPP

#include <string>

class GameEntity {
    //exposed constructor and method
    public:
        // Constructor that initializes game entity variables
        GameEntity(const std::string& name, int health, float positionX, float positionY);

        // Member functions
        void takeDamage(int damage);

        void move(float deltaX, float deltaY);

        void displayStatus() const;

    // internal variables
    private:
        std::string name;
        int health;
        float positionX, positionY;

};

#endif