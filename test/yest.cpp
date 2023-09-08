#include <iostream>

int main(){
    int ligne;
    int colone;
    char lettre;

    std::cout << "Le nombre de ligne : ";
    std::cin >> ligne;

    std::cout << "Le nombre de colone : ";
    std::cin >> colone;

    std::cout << "Le caractere : ";
    std::cin >> lettre;

    for (int i=1; i <= ligne; i++){
        for(int j=1;j<=colone;j++){
            std::cout << lettre;
        }
        std::cout << "\n";
    }
}