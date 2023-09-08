#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "****************** CALCULATRICE ******************\n";

    std::cout << "Entrer un operateur (+ - * /): ";
    std::cin >> op;

    std::cout << "Etrer le premier chiffre: ";
    std::cin >> num1;

    std::cout << "Etrer le deuxieme chiffre: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result= num1 + num2;
        std::cout << "Le resultat est " << result << "\n";
        break;
    case '-':
        result= num1 - num2;
        std::cout << "Le resultat est " << result << "\n";
        break;
    case '*':
        result= num1 * num2;
        std::cout << "Le resultat est " << result << "\n";
        break;
    case '/':
        result= num1 / num2;
        std::cout << "Le resultat est " << result << "\n";
        break;
    default:
        std::cout << "Merci d'entrer un opérateur valide";
        break;
    }
    std::cout << "**************************************************";


}