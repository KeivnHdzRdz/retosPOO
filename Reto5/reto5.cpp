#include <iostream>
using namespace std;

int minsaltos (int X, int Y, int D){
    int resultado = (Y-X)/D +1;
}



int main(){
    int X, Y, D;
    int resultado;

    cout<< "Chaval, dame punto de inicio:"<< endl;
    cin >> X;

    cout<< "Chaval, dame punto final:"<< endl;
    cin >> Y;

    cout<< "Chaval, dame la distancia de salto:"<< endl;
    cin >> D;

    resultado = minsaltos(X, Y, D);

    cout<< "Chaval, el numero de saltos minimos es:"<< resultado;

}

