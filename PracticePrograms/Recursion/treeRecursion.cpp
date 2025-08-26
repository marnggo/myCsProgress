#include <iostream>

using namespace std;

int iteration = 0;

void treeRecursion(int n) {
    if(n > 0) { 
        iteration++;    
        cout << "iteration no.: " << iteration << endl;
        cout << n << endl;
        treeRecursion(n - 1);
        treeRecursion(n - 1);    
    }
}

int main() {
    treeRecursion(5);
}