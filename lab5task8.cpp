#include <iostream>
using namespace std;

int accumulate(int value) {
    static int total = 0;
    total += value;
    return total;
}

int main() {
    cout << "Total after adding 10: " << accumulate(10) << endl;
    cout << "Total after adding 25: " << accumulate(25) << endl;
    cout << "Total after adding 5: " << accumulate(5) << endl;
    return 0;
}