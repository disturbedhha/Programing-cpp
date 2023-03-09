#include <iostream>
#include "classVote.h"
#include <stdlib.h>

int main()
{
    //Crear una clase que almacene el nombre, identificacion y genere un codigo al azar
    //Despues pregunte si quiere votar pida la identificacion y el codigo
    //Cuente el numero de votos con pass-by-pointer
    //Crear un archivo que almacena a los votantes y que pueda leer un archivo con los votos


    Vote usuario[10];
    std::string name;
    std::string surname;
    std::string id;
    char opt;
    int i = 0;
    //Registrar votantes
    do
    {
        
        std::cout << "Ingresar nombre: " << std::endl;
        std::cin >> name;
        std::cout << "Ingresar apellidos: " << std::endl;
        std::cin >> surname;
        std::cout << "Ingresar identificacion" << std::endl;
        std::cin >> id;
        usuario[i].setRegister(name, surname, id);

        std::cout << "Desea votar \nS / N " << std::endl;
        std::cin >> opt;
        i++;
    } while ((opt == 's') | (opt == 'S'));
    
    for(int x = 0; x < i; x++)
    {
        usuario[x].getRegister();
    }
    return 0;
}