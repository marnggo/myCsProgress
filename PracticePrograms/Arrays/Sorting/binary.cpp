#include <iostream>

// reccursion
// parameters: 
// the string
// the 

// should I have an indicator (n) so that my


// finds first instance
int binarySearch(int arr[], int low, int high, int toSearch) {
    int mid = (low + high) / 2;

    if(high >= low) {
        if(arr[mid] == toSearch) {
            return mid;
        }
        else if(arr[mid] > toSearch) {
            return binarySearch(arr, low, mid - 1, toSearch);
        }
        else {
            return binarySearch(arr, mid + 1, high, toSearch);
        }
    }

    return -1;
}

int main() {
    int arrayOfNum[100];
    int toSearch;

    int i;
    for(i = 0; i < 100; i++) {
        arrayOfNum[i] = i + 1;
    }

    std::cout << "----------- binary search -------------" << std::endl;
    std::cout << "find number 1-100: ";
    std::cin >> toSearch;

    if (binarySearch(arrayOfNum, 0, 99, toSearch) >= 0) {
        std::cout << "number was found" << std::endl;
    }
    else 
        std::cout << "number not found";
}