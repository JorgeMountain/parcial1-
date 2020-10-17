#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<cmath>

using namespace std;

int ramdom(int, int, int);
int ejex(int angulo , int, int, int);
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

int ejex(int angulo, int Vo, int t ){
    int x;
    int Xo=0;
    int vx;
    vx = Vo*cos(angulo);
    x = Xo+ vx*t;

    return x;

}
