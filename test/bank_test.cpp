#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance =0;
    int choice = 0;
    do{ std::cout << "******************\n";
        std::cout << "Entrez votre choix\n";
        std::cout << "******************\n";
        std::cout << "1. Montre votre argent en banque\n";
        std::cout << "2. Deposer de l'argent en banque\n";
        std::cout << "3. Retirer de l'argent en banque\n";
        std::cout << "4. Quitter le programme\n";
        std::cin >> choice;
        
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2: 
            balance += deposit();
            break;
        case 3: 
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "Merci d'avoir utilisez notre programme";
            break;
        default:
            std::cout << "Utiliser un des choix SVP \n";
            break;
    }}while(choice != 4);

}
void showBalance(double balance){
    if (balance == 0){
        std::cout << "Desoler tu es pauvre tu as 0 euros sale connard\n";
    }
    else{
        std::cout << "Tu as "<< std::setprecision(2) << std::fixed << balance << "d'euros connard\n";
    }
    }
    
double deposit(){
    double amount = 0;
    std::cout << "Entrez le montant que vous voulez deposer \n";
    std::cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        std::cout<<"Deposer pas retirer connard \n";
        return 0;
    }
}
double withdraw(double balance){
        double amount = 0;
    std::cout << "Entrez le montant que vous voulez retirer \n";
    std::cin >> amount;
    if(amount > balance){
        std::cout<<"ta pas autant de sous en banque connard \n";
        return 0;
    }
    else if(amount < 0){
        std::cout<<"retirer pas deposer connard\n";
        return 0;
    }
    else{
        return amount;
    }
}
