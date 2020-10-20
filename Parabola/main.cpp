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

                float Ho,Hd,dist,v=0,ang=5,t=0,g=9.81,t2,cont=0;
                cout<<"distancia entre los caniones: (d) ";
                cin>>dist;
                cout<<"Altura canion of: ";
                cin>>Ho;
                cout<<"Altura canion def: ";
                cin>>Hd;
                float vox,voy,det,det2,a,b,c;
                for(v=0.01;100000;v+=0.01)
                {
                    for (ang=0;(ang>=0 && ang<=90) || (ang>270 && ang<360);ang++)
                    {
                        if (ang==90)
                        {
                            ang=-89;
                        }
                        vox=cos(ang*(3.14/180));
                        voy=sin(ang*(3.14/180));
                        a=g/2;
                        b=(v*vox)*-1;
                        c=Ho-Hd;
                        det=((b*b)-(4*a*c));
                        det2=-1*(b)+sqrt(det);
                        t=det2/(2*a);
                        t2=dist/(vox*v);
                        if (t<2.5 && t2<2.5)//El disparo debe llegar antes de 2.5 s
                        {
                            if(abs(t-t2)<=0.01)
                            {
                                cont++;
                                if(cont<=3)
                                {

                                    cout << "Disparo " << cont << " La velocidad inicial con " << ang << " grados es " << v << " m/s" << endl;
                                    cout <<  "se demora " << t << " segundos en impactar." << endl;
                                }
                                if(cont==3)
                                {
                                    break;
                                }
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
