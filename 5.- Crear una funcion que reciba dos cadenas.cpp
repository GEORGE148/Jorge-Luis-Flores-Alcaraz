#include <iostream>
#include <string>
using namespace std;
void concatenarCadena(char cad1[], char cad2[], int tamano);
int contadorDeCaracter(char cadena[]);

int main()
{
int tamano=0;
    char cad1[50];
    char cad2[50];
    cout<<"introduce tu nombre completo o cadena de palabras:\n "<<endl;
    cin.getline(cad1, 50, '\n');
    tamano = contadorDeCaracter(cad1);
    cout<<"\n";
    cout<<"introduce la segunda cadena : \n "<<endl;
    cin.getline(cad2, 50 ,'\n');
    concatenarCadena(cad1,cad2,tamano);
     cout<<"\n";
    cout<<"cadena concatenada: \n\n"<<cad1<<endl;
    return 0;
}

int contadorDeCaracter(char cadena[])
{ 	
    int contador=0;
    while(cadena[contador]!='\0')
    {
        contador++;
    }
    return contador;
}
void concatenarCadena(char cad1[], char cad2[], int tamano)
{
    for(int i=0; cad2[i]!=0; i++){
        if(cad1[tamano]=='\0')
            cad1[tamano]=32;
        cad1[++tamano]=cad2[i];
        }
        cad1[tamano+1]='\0';
}
