#include <iostream>
using namespace std;
int letras(int n[]);
int main(){
	int n[5];
	for(int i=0;i<5;i++)
	cin>>n[i];
	letras(n);
}
int letras(int n[]){
	for(int i=0;i<5;i++)
	{
		if(n[i]==0)
		cout<<"CERO,";
		else if(n[i]==1)
		cout<<"UNO,";
		else if(n[i]==2)
		cout<<"DOS,";
		else if(n[i]==3)
		cout<<"TRES,";
		else if(n[i]==4)
		cout<<"CUATRO,";
		else if(n[i]==5)
		cout<<"CINCO,";
		else if(n[i]==6)
		cout<<"SEIS,";
		else if(n[i]==7)
		cout<<"SIETE,";
		else if(n[i]==8)
		cout<<"OCHO,";
		else if(n[i]==9)
		cout<<"NUEVE,";
	}
	
}

