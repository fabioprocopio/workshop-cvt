//Compilador: https://www.online-cpp.com/

#include<iostream>
using namespace std;
int main()
{
    int mat;
    cout << "Matrícula:" << endl;
    cin >> mat;

    int nota1, nota2, media;
  
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    
    media = (nota1 + nota2) / 2;
    
    // Média
    cout << "Média: " << media;
    return 0;
}
