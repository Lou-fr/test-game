#include <iostream>

int main(){
    char unit;
    double temp;

    std::cout <<"************ Temperature Converter ************\n";
    std::cout <<"F = Fahrenheit\n";
    std::cout <<"C = Celsius\n";
    std::cout <<"Quelle unite voulez vous utilisez ? : ";
    std::cin >> unit;

    if (unit == 'f' || unit =='F'){
        std::cout<<"Quelle est la temperature en Celsius : ";
        std::cin >> temp;

        temp = (1.8*temp)+32.0;
        std::cout<<"La temperature est de " << temp << " Fahrenheit\n";
    }
    else if (unit == 'c'||unit =='C'){
        std::cout<<"Quelle est la temperature en Fahrenheit : ";
        std::cin >> temp;

        temp=(temp-32)/1.8;
        std::cout<<"La temperature est de " << temp << " Celsius\n";
    }
    else{
        std::cout << "Merci d'entrer la bonne uniter";
    }
    std::cout <<"***********************************************\n";
    std::cout <<"Created by Lou Lulu\n";
    std::cout <<"***********************************************\n";

    return 0;

}