#include <iostream>


int suba(int a){
    a -= 5;
    return a;
}

int main(){
    int b;
    
    std::cin >> b;
    std::cout << suba(b) << endl;
}