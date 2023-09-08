#include <iostream>

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100)+1;
    
    std::cout << "******************* DEVINE LE CHIFFRE ********************\n";

    do{
        std::cout <<"Devine le chiffre, il se situe entre 1 et 100 inclus : ";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout <<"Trop haut\n";
        }
        else if(guess < num){
            std::cout <<"Trop bas\n";
        }
        else{
            std::cout << "Bien jouer tu as reussi en " << tries << " essaie\n";
            std::cout << "**********************************************************\n";
        }
    }while (num != guess);
}