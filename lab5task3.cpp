#include <iostream>
using namespace std;


int multiply(const int &a, const int &b) {
    return a * b;
}

int main() {
    int num1 = 8;
    int num2 = 9;
    cout << "Product: " << multiply(num1, num2) << endl;
    return 0;
}
