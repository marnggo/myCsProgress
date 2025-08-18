#include <iostream>
#include <cstring>

typedef char String100[100];

void swap(char &a, char &b) {
    
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int countChar(char reversable[]) {
    int i;

    for(i = 0; reversable[i] != '\0'; i++) {

    }

    return i;
}

void reverString(char reversable[], int n) {

    int i, j;

    for(i = 0; i < n/2; i++) {
        swap(reversable[i], reversable[n - i - 1]);
    }
}

int main() {

    String100 toReverse; 

    std::cout << "--------------- Reverse the String ----------------" << std::endl;
    std::cout << "enter string to be reversed: " << std::endl;
    std::cin >> toReverse;

    int len = countChar(toReverse);
    reverString(toReverse, len);

    std::cout << "Reversed string: " << toReverse <<std::endl;
}