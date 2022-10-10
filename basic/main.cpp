#include <iostream>
#include "namespace/headers/game1.h"

int main() {
    game1::play();
    std::cout<<game1::plus(1,2)<< endl;
    std::cout << "Hello, World!" << std::endl;
    system("pause");
    return 0;
}
