#include <iostream>
#include <string.h>

int funcion(char cad[], int inicio, int final);
using namespace std;

int main(int argc, const char * argv[]) {
    char vec[50];
    cout << "Simetrico!\n";
    cout<<"introduce una cadena: ";
    cin.getline(vec, 50,'\n');
   // funcion(vec, 0, strlen(vec)-1);
    if (funcion(vec, 0, strlen(vec)-1)!=0) {
        cout<<"Es Simetrico";
    }
    else
        cout<<"no es Simetrico";
    return 0;
}

int funcion(char vec[], int inicio, int final)
{
    if (inicio<final) {
        if(vec[inicio]==' ')
            return funcion(vec, ++inicio, final);
        else if(vec[final]==' ')
            return funcion(vec, inicio, --final);
        else if (vec[inicio]==vec[final]){
            inicio++;
            final--;
            return funcion(vec, inicio, final);
        }
        else
            return 0;
    }
    else
        return 1;
}


