
#include <bits/stdc++.h>
using namespace std;
struct Musica{
    char nombre[22];
    char cancion[22];
};
struct Cancion{
    char nombre[22];
    char albums;
    Musica musica;
};

int main()
{
    Cancion canciones[12];
    Cancion *apuntador=canciones;
    for(int i=0;i<=1;i++){
        cout<<"Nombre del artista: ";
        cin.getline(canciones[i].nombre,20);
        cout<<"Nombre de la cancion: ";
        cin>>canciones[i].albums;
        cout<<"Genero: ";
        fflush(stdin);
        cin.getline(canciones[i].musica.nombre,20);
        cout<<"Album: ";
        cin.getline(canciones[i].musica.cancion,20);
    }
    cout<<endl;
    for(;apuntador<=&canciones[1];apuntador++){
        cout<<"Nombre del artista:  "<<apuntador->nombre<<endl;
        cout<<"Nombre de la cancion: "<<apuntador->albums<<endl;
        cout<<"Genero: "<<apuntador->musica.nombre<<endl;
        cout<<"Album: "<<apuntador->musica.cancion<<endl;
        cout<<endl;
    }

    return 0;
}

