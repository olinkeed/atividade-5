#include <iostream>


int soma(int a){
    a += 10;
    return a;
}

int main(){
    int n;

    std::cin >> n;
    std::cout << soma(n) << endl;
}