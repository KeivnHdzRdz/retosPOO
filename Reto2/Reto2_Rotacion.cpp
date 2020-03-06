#include<iostream> // inicializar codigo
#include<vector> // array A
using namespace std; //cout y cin

vector <int> rotacion (vector<int>Aold, int k){

    vector <int> Anew;
        for(int j=0; j < k; j++){
        Anew = Aold;

        for(int i = 0; i < Aold.size(); i++){ // = valga 0
            if (i == 0){ // == preguntando si i vale 0
                Aold[i] = Anew[Aold.size()-1];
                } else{
                Aold[i] = Anew[i-1];
            }
        }
    }

        return Aold;
}

int main(){
    vector<int> datos {1, 2, 3, 4, 5, 6, 7};
    vector<int> copia;
    copia = rotacion (datos, 4);
    for (int i = 0; i < datos.size(); i++){
        cout<<copia[i] << endl; //endl imprime salto de linea (renglon por renglon)
    }

}