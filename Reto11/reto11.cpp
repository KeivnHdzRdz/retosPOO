#include<iostream>
#include<vector>
using namespace std;

int solution(int A, int B, int K){

    int cont = 0;
        for(int i = A; i <= B; i++){
            if(i%K == 0){
            cont = cont+1;
        }
    }

    return cont;
}



int main(){
    int A, B, K;
    cout<< "Ingresa un valor para A" << endl;
    cin>> A;
    cout<< "Ingresa un valor para B" << endl;
    cin>> B;
    cout<< "Ingresa un valor para K" << endl;
    cin>> K;
    cout<< "Tu resultado es" << endl;

    int result;
    result = solution(A,B,K);
    cout<< result << endl;
}