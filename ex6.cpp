#include <iostream>

using namespace std;

void sub(int *a){
    *a -= 5;
}

int main(){
    int b;

    std::cin >> b;
    sub(&b);
    std::cout << b << endl;
}