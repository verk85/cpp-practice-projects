#include <iostream>
#include <iomanip>
#include <limits>

bool numericvalidation(){
    if (std::cin.fail() || std::cin.peek() != '\n') {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main(){
    
    int arraySize = 0;
    bool isValidSize = false;
    while (!isValidSize){
        std::cout << "Please enter the size of the Array you want to create: " << std::endl;
        std::cin >> arraySize;
        if ( !numericvalidation() || arraySize<=0){
            arraySize = 0;
            std::cout << "Invalid Input!! " << std::endl;
        }else {
            isValidSize = true;
        }
    }   
    int* integerArray = new int[arraySize];
    int newInput = 0;

    for(int i = 0 ; i < arraySize ; i++){
        do{
            std::cout << "Please fill your array(" << i+1 << "/" << arraySize << ")"<< std::endl;
            std::cin >> newInput;
        }while(!numericvalidation());
        integerArray[i] = newInput;
    }
    std::cout << "Array contents: " << std::endl;
    for (size_t i = 0; i < arraySize; i++)
    {
        std::cout << integerArray[i] << std::endl;
    }
    
    delete[] integerArray;
    return 0;
}