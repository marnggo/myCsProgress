#include <iostream>

typedef char String[100];

// returns first instance
int linearSearch(char theString[], char toSearch) {
    int i;

    for(i = 0; theString[i] != '\0'; i++) {
        if(theString[i] == toSearch){
            return i;
        }
    }

        return -1;
}

int main() {
    String theString;
    char toSearch;
    int index;
    

    std::cout << "--------- character linear search -----------" << std::endl;
    std::cout << "string to be searched: ";
    std::cin >> theString;
    std::cout << "string to search: ";
    std::cin >> toSearch;

    index = linearSearch(theString, toSearch);

    if(index >= 0) {
        std::cout << "character found at index: " << index << std::endl;
    }
    else {
        std::cout << "character not found on string" << std::endl;
    }
}