#include <iostream>
#include <stdlib.h>

int main() {
    int * consecNum;
    int n;

    std::cout << "enter the number of arrays: " << std::endl;
    std::cin >> n;

    consecNum = (int *)malloc(n*sizeof(int));

    int i, count;

    count = 0;
    for(i = 0; i < n; i++) {
        *(consecNum + i) = count;
        count++;

        std::cout << *(consecNum + i) << ", ";
    }

    return 0;
}