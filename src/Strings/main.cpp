#include <iostream>

int main(){
    int age = 0;
    std::string fullName = "";

    std::cout << "Please enter your full Name: " << std::endl;
    std::getline(std::cin, fullName);

    std::cout << "Please enter your Age: " << std::endl;
    std::cin >> age;

    std::cout << "Name: " << fullName << std::endl;
    std::cout << "Age: " << age << std::endl;
    
    std::clog << "Logger: This is a log message" << std::endl;
    return 0;
} 