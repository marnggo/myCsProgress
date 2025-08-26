#include <iostream>

using namespace std;

int staticReturn(int n) {
    static int x = 0;
    if(n > 0) {
        x++;
        return staticReturn(n - 1) + x;
    }

    return 0;
}

int y = 0;

int globalReturn(int n) {
    if(n > 0) {
        y++;
        return globalReturn(n - 1) + y;
    }

    return 0;
}

int main() {

    cout << "Static Return" << endl;

    int a = staticReturn(5);
    cout << a << endl;

    cout << staticReturn(5) << endl;
    
    cout << "Global Return" << endl;

    cout << globalReturn(5) << endl;

    cout << globalReturn(5) << endl;
}