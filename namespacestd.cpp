// AtividadesExercicios.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <array>
using namespace std; //Usando namespace std para deixar codigo mais limpo
int main()
{
    cout << "Metodo For \n";
    array<string, 4> nome = {"P", "PU","PUP", "PUPO"};
        for (int i = 0; i < nome.size(); ++i) // Percorre todo o vetor retornando resultado
        {
        std::cout << nome[i] << std::endl;
        }

}
