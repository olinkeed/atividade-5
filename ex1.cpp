#include <iostream>
int inteiro(int a, int b)
{
    return a * b;
}
int main()
{
    int c, d;
    std::cin >> c >> d;
    std::cout << inteiro(c, d);

    return 0;
}