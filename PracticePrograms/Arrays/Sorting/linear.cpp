#include <iostream>

typedef char String[100];

// searches all instances of the character
int* linearSearch(char string[], char toSearch) {
    int i;
    int indexCount = 0;
    int index[100];

    for(i = 0; string[i] != '\0'; i++) {
        if(string[i] == toSearch) {
            index[indexCount] = i;
            indexCount++;
        }
    }

    return index;
}

int main() {
    String theString;
    char toSearch;
    

    std::cout << "--------- character linear search -----------" << std::endl;
    std::cout << "string to be searched: ";
    std::cin >> theString;
    std::cout << "string to search: ";
    std::cin >> toSearch;
    
    int indexes[100] = linearSearch(theString, toSearch);

}