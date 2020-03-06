#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> A){

    vector <int> orden;
    orden = sort(A.begin(), A.end()); //sirve para orden los datos de menor a mayor en un array
    cout<< A[0];
    cout<< A[1];
    cout<< A[2];
    cout<< A[3];
    cout<< A[4];
    return 5;


}

int main(){
    int faltante;
    vector <int> A = {2, 5, 4, 1, 6};
    faltante = solution(A);
    cout << "Parcero, te falta el numero: "<< faltante << endl;


}


