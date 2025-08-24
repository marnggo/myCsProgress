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

// // shift elements to the right at a certain point
// void shiftToRight(char theString[], int startIndex, int endIndex) {
//     int i;
//     char temp;

//     for(i = endIndex; i > startIndex; i--) {
//         theString[i] = theString[i - 1];
//     }
// }

void insertionSort(char theString[]) {
    int i, j, n, index;
    char temp;

    n = strlen(theString);

    for(i = 1; i < n; i++) {
        temp = theString[i];
        
        j = i - 1;
        while(j >= 0 && temp < theString[j]) {
            theString[j + 1] = theString[j];
            j--;
        }

        theString[j + 1] = temp;
    }
}

int main() {
    String input;

    cout << "----------- insertion sort ------------" << endl;
    cout << "enter string to sort: " << endl;
    cin >> input;

    // shiftToRight(input, 0, 3);

    // cout << input << endl;

    insertionSort(input);

    cout << "sorted string: ";
    cout << input;

    return 0;
}