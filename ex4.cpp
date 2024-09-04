#include <iostream>
int ref(int *b);
*b += 10;

int main()
{
    int a;
    std::cin >> a;
    ref(&a);
    std::cout << a;

    return 0;
}