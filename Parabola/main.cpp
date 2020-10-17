#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    int op;
    double Ho,Vo,Hd,Vd,alpo,alpd,dist,t=0,t2;
    double g=9.81;
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
                double cos,detr,dtr2,v;
                cos=sqrt(2)/2;
                //cout<<cos<<endl;
                for(v=0.001;t<2.5;v=v+0.001)
                {
                    detr=((v*cos)*(v*cos))-(4*(g/2)*(Hd-Ho));
                    //cout<<detr<<endl;
                    dtr2=v*cos+sqrt(detr);
                    //cout<<dtr2<<endl;
                    t=dtr2/g;
                    //cout<<"Tiempo: "<<t<<endl;
                    t2=dist/(cos*v);
                    if(abs(t-t2)<=0.001)
                    {
                        cout<<"velocidad "<<v<<endl;
                    }
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

