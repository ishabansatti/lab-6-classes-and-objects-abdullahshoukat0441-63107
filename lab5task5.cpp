#include <iostream>
using namespace std;

int main() {
    int x = 12;
    int y = 5;


    auto calculateAndPrint = [=]() {
        cout << "Sum: " << x + y << endl;
        cout << "Product: " << x * y << endl;
    };

    calculateAndPrint();

    return 0;
}