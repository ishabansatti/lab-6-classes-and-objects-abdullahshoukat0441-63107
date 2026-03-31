#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    auto incrementer = [&counter]() {
        counter++;
    };

    incrementer();
    cout << "Counter after call 1: " << counter << endl;

    incrementer();
    cout << "Counter after call 2: " << counter << endl;

    incrementer();
    cout << "Counter after call 3: " << counter << endl;

    return 0;
}