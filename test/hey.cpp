#include <iostream>


int main(){
    std::string name;
    int age;

    std::cout<< "Quel est vortre nom ? : ";
    std::getline(std::cin, name);

    std::cout << "Quel est votre age ? : ";
    std::cin >> age;

    std::cout << "Bienvenue " << name << " , vous avez " << age << " ans";

    return 0;
}