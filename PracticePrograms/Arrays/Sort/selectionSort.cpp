#include <iostream>
#include <cstring>

using namespace std;

typedef char String[100];

void swap(char &a, char &b) {
    char temp;

    temp = a;
    a = b;
    b = temp;
}

void selectionSort(char theString[]) {
    int i, j, min;
    int n = strlen(theString);

    for(i = 0; i < n; i++) {
        min = i;
        for(j = i; j < n; j++) {
            if(theString[min] > theString[j]) {
                min = j;
            }
        }
        swap(theString[i], theString[min]);
    }
}

int main() {
    String input;

    cout << "------------- selection sort ---------------" << endl;
    cout << "enter string to sort: ";
    cin >> input;

    selectionSort(input);

    cout << "sorted string: ";
    cout << input;
}