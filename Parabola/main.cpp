#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    int op;
    float Ho,Vo,Hd,Vd,alpo,alpd,dist,t=0;
    float g=9.81;
    bool ver=true;

    while (ver==true)
    {
        cout<<"1 para disparos ofensivos aciertan defensivo: "<<endl;
        cout<<"2 disparos de defensivo aciertan ofensivo  "<<endl;
        cout<<"3 para disparos defensivos: "<<endl;
        cout<<"4 para disparos : "<<endl;
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
                float cos,detr,cuadr,dtr2;
                cos=sqrt(2)/2;
                //cout<<cos<<endl;
                for(float v=1;t<2.5;v=v+0.01)
                {

                    detr=((v*cos)*(v*cos))-(4*(g/2)*(Hd-Ho));
                    //cout<<detr<<endl;
                    dtr2=+sqrt(detr);
                    //cout<<dtr2<<endl;
                    t=dtr2/g;
                    cout<<"Timepo: "t<<endl;
                }

                //vel_gd(Ho, Hd);


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

    }
    return 0;
}

