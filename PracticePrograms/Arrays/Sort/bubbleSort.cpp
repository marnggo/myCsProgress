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

void bubbleSort(char theString[]) {
    int i, j, n;
    n = strlen(theString);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(theString[j] > theString[j + 1]) {
                swap(theString[j], theString[j + 1]);
            }
        }
    }
}

int main() {
    String input; 

    cout << "------------- bubble sort --------------" << endl;
    cout << "enter string to sort: " << endl;
    cin >> input;

    bubbleSort(input);

    cout << input << endl;
}