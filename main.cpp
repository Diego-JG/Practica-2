
#include <iostream>
using namespace std;
struct Subscripcion{
    char nombre[22];
    char rev[22];
};
struct Revista{
    char subs;
    float costo;
    Subscripcion subscripcion;
};

int main()
{
    Revista revistas[12];
    Revista *apuntador=revistas;
    for(int i=1;i<=2;i++){
        cout<<"Nombre del usuario: ";
        cin.getline(revistas[i].subscripcion.nombre,20);
        cout<<"Tiempo de subscripcion: ";
        cin>>revistas[i].subs;
        cout<<"Nombre de la revista: ";
        fflush(stdin);
        cin.getline(revistas[i].subscripcion.rev,20);
        cout<<"Costo de subscripcion: ";
        cin>>revistas[i].costo,20;
    }
    cout<<endl;
    for(;apuntador<=&revistas[1];apuntador++){
        cout<<"Nombre del usuario: "<<apuntador->subscripcion.nombre<<endl;
        cout<<"Tiempo de subscripcion: "<<apuntador->subs<<endl;
        cout<<"Nombre de la revista: "<<apuntador->subscripcion.rev<<endl;
        cout<<"Costo de subscripcion: "<<apuntador->costo<<endl;
        cout<<endl;
    }

    return 0;
}

