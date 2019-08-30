#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main (int argc, char** argv){
	int valores[10], *puntero;
	puntero=&valores[0];
	int mayor=INT_MIN;
	for (int i=1; i<=10; i++){
		cout<<"Dame el valor "<<i<<endl;
		cin>>valores[i];	
	}
	for (int *puntero=&valores[1]; puntero<=&valores[10]; puntero++){
		if(*puntero>mayor) mayor=*puntero;
	}
	cout<<"El valor mayor es: "<<mayor<<endl;
		
	return 0;
	}
