#include <iostream>

//clase vote
class Vote
{
    private:
        std::string name;
        std::string surname;
        std::string identification;
        std::string password;

    public:
        void setRegister(std::string n,std::string sn, std::string id);
        void getRegister();
        std::string passwordGenerator();

};
//Registra los valores nombre,apellido y id
void Vote::setRegister(std::string us, std::string sn, std::string id)
{
    name = us;
    surname = sn;
    identification = id;
}

void Vote::getRegister()
{
    std::cout << "Nombre: " << name << " " << surname << std::endl;
    std::cout << "ID: " << identification << std::endl;
}
//Crear una constraseña al azar y la guarda en password
std::string Vote::passwordGenerator()
{

}