#include <iostream>
#include <cmath>
using namespace std;

void vel_gd(int ,int );


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
                vel_gd(Ho, Hd);


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

void vel_gd(int al1,int al2)
{
    double t;
    double a=2,cos;
    double sqrt(double a)/2;
    cos=a/2;
    for(double v=0.0;t>2,5;v++)
    {
        t=()/2;
    }

}
