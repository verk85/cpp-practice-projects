#include <iostream>

int main(){

    int binaryNum = 0b101;
    int octalNum = 0101;
    int num = 101;
    int hexadecimalNum = 0x101;

    std::cout << "Binary: " << binaryNum << std::endl;
    std::cout << "Octal: " << octalNum << std::endl;
    std::cout << "Decimal: " << num << std::endl;
    std::cout << "Hexadecimal: " << hexadecimalNum << std::endl;

    return 0;
}