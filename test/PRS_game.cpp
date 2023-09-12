#include <iostream>
#include <ctime>

char UserChoice();
char ComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    bool i = true;
    int userinput;
    do{
        char player;
        char computer;

        player = UserChoice();
        std::cout << "Vous avez choisis : ";
        showChoice(player);

        computer = ComputerChoice();
        std::cout << "L'ordinateur a choisis : ";
        showChoice(computer);
        chooseWinner(player, computer);
        std::cout << "**************************************************\n";
        std::cout << "Voulez vous rejouer ? \n";
        std::cout << "1 pour Oui \n";
        std::cout << "2 pour Non \n";
        std::cin >> userinput;
        switch (userinput)
        {
        case 1:
            std::cout << "**************************************************\n";
            i = true;
            break;
        
        case 2:
            i = false;
            std::cout << "**************************************************\n";
            break;
        default:
            std::cout << "Merci d'entrer une valeur valable";
            break;
        }
    }while (i == true);
    
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