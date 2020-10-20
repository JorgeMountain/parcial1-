
#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<cmath>

using namespace std;

int ramdom(int, int, int);
int ejex(int angulo , int Vo, int t);
int ejey(int angulo, int Vy, int t);
int main()
{
    float g=9.8, pi=3.1416;
    int Ho,A;
    cout<<"ingrese la altura y el angulo del disparo ofensivo: ";
    cin>>Ho>>A;
    int d=600,Xo=0,Yo=Ho,Do=0.05*d;
    int Hd=-100,xD=d,yD=Hd,dD=0.05*d;
    float aO=A*pi/180, aD=0;
    int iter=1, flag=0;

    for(int VoO=0;VoO<100;VoO+=5){
        float   VxO=VoO*cos(aO);
        float   VyO=VoO*sin(aO);
        for (int t=1;t<1000000;t++){
            float x=Xo+ VxO*t;
            float y=Yo+VyO*t-(1/2*g*(t*t));
            cout<<"x: "<<x<<" y: "<<y<<endl;
            if(sqrt(pow(d-Hd,2)+pow(x-y,2))<=Do);
                   flag=1;
                   break;
        }
        iter+=1;

    }


}


/*
int random (int n, int desde, int hasta){//Funcion para generar varibles aleatrotias para los parametros de lanzamiento
    int aleatorio;
    for (int i = 1; i <= n; i ++){
    aleatorio = rand()%(hasta-desde+1)+desde;
    return aleatorio;
            }
}



*/
