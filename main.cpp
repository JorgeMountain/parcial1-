
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
