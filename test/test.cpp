#include <iostream>
#include <cmath>

int main(){
    std::string name;
    std::cout << "Votre pseaudo ? : ";
    std::getline(std::cin, name);
    std::cout << name << "\n";
    int k = name.find(' ');
    if ( k > 0){
        name.erase(k, (k-2));
    }
    std::cout << name << " " << k ;

    return 0;
}