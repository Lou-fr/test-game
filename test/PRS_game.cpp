#include <iostream>
#include <ctime>

char UserChoice();
char ComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = UserChoice();
    std::cout << "Vous avez choisis : ";
    showChoice(player);

    computer = ComputerChoice();
    std::cout << "L'ordinateur a choisis : ";
    showChoice(computer);
    chooseWinner(player, computer);
}
char UserChoice(){
    char player;
    std::cout << "**************************************************\n";
    std::cout << "Bienvenue sur le jeux 'Pierre, Feuille, Sciseaux'.\n";
    std::cout << "**************************************************\n\n";
    do{
        std::cout << "Voicie les choix disponible : \n";
        std::cout << "'p' pour Papier\n";
        std::cout << "'r' pour Pierre\n";
        std::cout << "'s' pour Sciseaux\n";
        std::cin >> player;
    }while (player != 'p' && player != 's' && player != 'r');
    return player;

}
char ComputerChoice(){
    srand(time(NULL));
    int computer = (rand() % 3)+1;
    switch (computer)
    {
    case 1:
        return 'p';
    case 2:
        return 's';
    case 3:
        return 'r';
    }
    return 0;
}
void showChoice(char choice){
    switch (choice)
    {
    case 'p':
        std::cout << "Papier\n";
        break;
    case 's':
        std::cout << "Sciseaux\n";
        break;
    case 'r':
        std::cout << "Pierre\n";
        break;
    }    
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'p':
        if (computer == 'p')
        {
            std::cout << "Egaliter !\n";
            std::cout << "**************************************************\n\n";
        }
        else if (computer == 's'){
            std::cout << "Perdus !\n";
            std::cout << "**************************************************\n\n";
        }
        else{
            std::cout << "Gagner !\n";
            std::cout << "**************************************************\n\n";
        }
        break;
    case 's':
        if (computer == 's')
        {
            std::cout << "Egaliter !\n";
            std::cout << "**************************************************\n\n";
        }
        else if (computer == 'r'){
            std::cout << "Perdus !\n";
            std::cout << "**************************************************\n\n";
        }
        else{
            std::cout << "Gagner !\n";
            std::cout << "**************************************************\n\n";
        }
        break;
    case 'r':
        if (computer == 'r')
        {
            std::cout << "Egaliter !\n";
            std::cout << "**************************************************\n\n";
        }
        else if (computer == 'p'){
            std::cout << "Perdus !\n";
            std::cout << "**************************************************\n\n";
        }
        else{
            std::cout << "Gagner !\n";
            std::cout << "**************************************************\n\n";
        }
        break;
    default:
        break;
    }    
}