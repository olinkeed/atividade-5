#include <iostream>

void maiuscula(string *nome){
    for(char & c : *nome){
      c = toupper(c);
    }
}

int main(){
    std::string nome;

    std::cin >> nome;
    maiuscula(&nome);
    std::cout << nome << endl;
}