#include <iostream>

void mult(int a, int b, int *res){
    *res = a * b;
}

int main(){
    int n1, n2, res = 0;

    std::cin >> n1 >> n2;
    mult(n1, n2, &res);
    std::cout << res << endl;
    return 0;
}

