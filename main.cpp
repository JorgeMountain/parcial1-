
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
int Ho=-100, d=600,Xo=0,Yo=Ho,Do=0.05*d;
int Hd=-100,xD=d,yD=Hd,dD=0.05*d;
float aO=50*pi/180, aD=0;
int i=1, j=0;

    cout << "Hello World!" << endl;
    return 0;
}
int random (int n, int desde, int hasta){//Funcion para generar varibles aleatrotias para los parametros de lanzamiento
    int aleatorio;
    for (int i = 1; i <= n; i ++){
    aleatorio = rand()%(hasta-desde+1)+desde;
    return aleatorio;
            }
}

int ejex(int angulo, int Vo, int t ){ //Funcion para calcular la distancia del proyectil en el eje X
    int x;
    int Xo=0;
    int vx;
    vx = Vo*cos(angulo);
    x = Xo+ vx*t;

    return x;

}
int ejey(int angulo, int Vo, int t ){ //Funcion para calcular la distancia del proyectil en el eje y
    int Y;
    float g=9.81;
    int Yo=0;
    int vy;
    vy = Vo*sin(angulo)-g*t;
    Y = Yo+vy*t-1/2*g*(t*t);

    return Y;

}
