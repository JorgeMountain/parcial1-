
#include <iostream>
#include<cmath>

using namespace std;

void golp_O(float aO,int Xo,int Yo, int d, int Hd, int A);
void golp_d(float aD,int Xo,int Yo, int d, int B,  int Yd);
int main()
{
    float pi=3.1416;
    int Ho,Hd,A, B, d, Xo,Xd;
    int nejer;


    cout<<"ingrese la posision en x del canon ofensivo: ";
    cin>>Xo;
    cout<<"ingrese la posicion en y del canon ofensivo: ";
    cin>>Ho;
    cout<<"ingrese el angulo del disparo ofensivo: ";
    cin>>A;
    cout<<"ingrese la posicion en x del canon defensivo: ";
    cin>>Xd;
    cout<<"ingrese la posicion en y del canon defensivo: ";
    cin>>Hd;
    cout<<"ingrese el angulo del disparo defensivo: ";
    cin>>B;
    cout<<"ingrese la distancia entre ambos: ";
    cin>>d;
    int Yo=Ho;
    int Yd=Hd;
    float aO=A*pi/180, aD=B*pi/180;

    cout<<"Ingrese el ejercicio que desea realizar :";
    cin>>nejer;
    if(nejer==1)golp_O( aO, Xo, Yo, d, Hd,A);
    else if (nejer==2)golp_d( aD, Xo, Yo, d,B,Yd);

}


void golp_O(float aO,int Xo,int Yo, int d, int Hd, int A){
    float x, y, vx, vy, v, raiz;
    int t, cont;
    cont=0;

    for (v=0;v<=100;v+=5){
        vx=v*cos(aO);
        vy=v*sin(aO);
        cout << v << endl;
        cout << vx << endl;
        cout << vy << endl;
        cout << endl;
        for(t=0;t<=1000;t+=1){
            x=Xo+vx*t;
            y=Yo+vy*t-(0.5*9.81*t*t);
            raiz=pow((d-x),2)+pow((Hd-y),2);
            if (sqrt(raiz)<=(0.05*d)){

                cont=1;
                break;
            }

        }
        if (cont==1) break;
    }
    cout << "el canon ofensivo golpea el defensivo cuando la velocidad es " << v <<" Y el angulo "<<A <<" en un tiempo: " << t << endl;

}
void golp_d(float aD,int Xo,int Yo, int d, int B, int Yd){
float x, y, vx, vy, v, raiz;
    int t, cond;
    cond=0;

    for (v=0;v<=100;v+=1){
        vx=v*cos(aD);
        vy=v*sin(aD);
        for(t=0;t<=1000;t+=1){
            x=-d+vx*t;
            y=Yd+vy*t-(0.5*9.81*t*t);
            raiz=pow((-Xo-x),2)+pow((Yo-y),2);
            if (sqrt(raiz)<=(0.025*d)){
                cond=1;
                break;
            }

        }
        if (cond==1) break;
    }
    cout << "el canon ofensivo golpea el defensivo cuando la velocidad es " << v <<" Y el angulo "<<B <<" en un tiempo: " << t << endl;

}

