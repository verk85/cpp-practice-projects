#include <iostream>
#include <iomanip> // For terminal input and output formatting

double convertCelsiusToFahrenheit(int celsius){

    return ((celsius * 9.0) / 5) + 32;
}

int main(){

int celsius = 0;
std::string temperatureEmoji = "🌡️";

std::cout << temperatureEmoji << " Enter your temperature in Celsius: " << std::endl;
std:: cin >> celsius;

if (celsius <= 10){
    temperatureEmoji = "🥶";
} else if (celsius <= 25){
    temperatureEmoji = "🌤️";
} else if(celsius>25){
    temperatureEmoji = "🥵";
}

double fahrenheit = convertCelsiusToFahrenheit(celsius);

std::cout << std::fixed << std::setprecision(2);
std::cout <<  celsius << "°C is equivalent to " << fahrenheit << "°F " << temperatureEmoji << std::endl;

return 0;
}