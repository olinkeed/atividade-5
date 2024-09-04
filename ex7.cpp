#include <iostream>

void vet(int V[5]){
    int i, j = 5, aux;
    for (i = 1; i <= 3; i++){
        aux = V[i];
        V[i] = V[j];
        V[j] = aux;
        j--;
    }
}

int main(){
    int vetor[5], n, i;
    for (i = 1; i <= 5; i++){
        std::cin >> n;
        vetor[i] = n;
    }
    vet(vetor);
    for (i = 1; i <= 5; i++){
        std::cout << vetor[i] << endl;
    }
}