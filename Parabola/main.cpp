#include <iostream>

using namespace std;

int main()
{
    int op,Ho,Vo,Hd,Vd,alpo,alpd,dist;
    bool ver=true;

    while (ver)
        cout<<"1 para disparos ofensivos aciertan defensivo: ";
        cout<<"2 disparos de defensivo aciertan ofensivo  ";
        cout<<"3 para disparos defensivos: ";
        cout<<"4 para disparos : ";
        cin>>op;
    //generar distapros ofensivos
        switch(op)
        {
            case 1:
            {
                cout<<"distancia entre los caniones: (d) ";
                cin>>dist;
                cout<<"Altura canion of: ";
                cin>>Ho;
                cout<<"Altura canion def: ";
                cin>>Hd;

            }
            break;

            case 2:
            {

            }

            break;

            case 3:
            {

            }
            break;

            case 4:
            {

            }
            break;

        }


    return 0;
}
