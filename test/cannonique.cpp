#include <iostream>

int userquit();
float cannonique();

int main(){
    char user_choice;
    std::cout << "\nBienvenue sur le le résolualateur 2000\n";
    std::cout << "Merci d'entrer cotre choix parmis cette liste : \n";
    std::cout << "'C' ou 'c' pour forme canonique \n";
    std::cin >> user_choice;
    switch (user_choice)
    {
    case 'c':
        cannonique();
        userquit();
        break;
    case 'C':
        cannonique();
        userquit();
        break;    
    default:
        break;
    }

}

float cannonique(){

    float val_a;
    float val_b;
    float val_c;
    float result_alpha;
    float result_beta;
    std::cout << "Entrer la valeur  de A \n";
    std::cin >> val_a;
    std::cout << "Entrer la valeur  de B \n";
    std::cin >> val_b;
    std::cout << "Entrer la valeur  de C \n";
    std::cin >> val_c;
    result_alpha = ((-val_b)/(2*val_a));
    result_beta = (-((val_b*val_b)-(4*val_a*val_c))/(4*val_a));
    std::cout << val_a <<"(x-" << result_alpha << ")^2-" << result_beta;
    return 0;

}
int userquit(){
    int userchoice = 0;
    std::cout << "\nQuand vous voulez quitter appuier sur 1\n";
    while (userchoice == 0)
    {
        std::cin >> userchoice;
    }
    return 0;
}