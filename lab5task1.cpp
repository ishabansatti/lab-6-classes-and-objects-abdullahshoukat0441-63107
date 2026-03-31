#include <iostream>
using namespace std;

int square(int n);

int main() {
    cout << "The square of 7 is: " << square(7) << endl;
    return 0;
}

int square(int n) {
    return n * n;
}