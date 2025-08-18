#include <iostream>
#include <cstdio>

// x will swap with y
void swap(int &x, int &y) {
    int z;

    z = y;
    y = x;
    x = z;
}

int main() {
    int var1, var2;
    int exitFlag = 0;

    while(exitFlag == 0) {
        
        std::cout << "---------------- Swapper ------------------" << std::endl;

        std::cout << "enter variable 1: " << std::endl;
        std::cin >> var1;

        std::cout << "enter variable 2: " << std::endl;
        std::cin >> var2;

        if(var1 == 0 && var2 == 0)
            exitFlag = 1;

        swap(var1, var2);

        std::cout << "variable 1: " << var1 << std::endl << "variable 2: " << var2 << std::endl;
    }
    
    return 0;
}