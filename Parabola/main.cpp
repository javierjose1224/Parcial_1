#include <iostream>
#include <cmath>
using namespace std;


bool evaluarCos(int, int, int, int);

int main()
{
    int op;
    //double Ho,Vo,Hd,Vd,alpo,alpd,dist,t=0,t2,x,y,vox,voy,detr,ang;
    //double g=9.81;
    bool ver=true,va;

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

            float dist,Ho,Hd,t=0.0,vox,voy,detr,g=9.81,y,t2,x;
            cout<<"distancia entre los caniones: (d) ";
            cin>>dist;
            cout<<"Altura canion of: ";
            cin>>Ho;
            cout<<"Altura canion def: ";
            cin>>Hd;

            float v=0.1;

            if(Ho==Hd)
            {
                    //ang=0.5;
                    for(float ang=0.5;ang<=0.5;ang=ang+0.5)
                    {

                        for(float v=00.1;t<2.5;v=v+0.001)//2.5 porque es lo que se demora en responder el canion defensivo
                        {
                            //CUANDO LAS DOS ALTURAS de los caniones MIDEN LO MISMO Se puede usar cualquier angulo del primer cuadrante a excepcion de 90
                            vox=v*cos(ang*(3.14/180));
                            voy=v*sin(ang*(3.14/180));
                            detr=(pow(voy,2))-((4*(g/2))*(Hd-Ho));
                            t=(voy+sqrt(detr))/2;
                            //cout<<"Tiempo 2: "<<t2<<endl;
                            //cout<<"El tiempo es: "<<t<<endl;
                            y=Ho+(voy*t)+((-(g/2))*(t*t));
                            t2=dist/vox;

                            if(abs(t-t2)<=0.001)
                            {
                                cout<<"velocidad inicial: "<< v <<" tiempo: "<< t <<" con angulo: "<<ang<<endl;
                                //ang=ang+0.5;
                                break;
                            }
                        }


                    }
                }
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

//bool evaluarCos();
//{
  //  for(double a=0;t<2,5;a=a+0,1;)
  //  {

  //  }
//}
