#include <iostream>
using namespace std;

bool isPrime(int n) {

    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; i++) {

        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int num1 = 7;
    int num2 = 10;

    if (isPrime(num1)) {
        cout << num1 << " is a prime number." << endl;
    } else {
        cout << num1 << " is NOT a prime number." << endl;
    }
    if (isPrime(num2)) {
        cout << num2 << " is a prime number." << endl;
    } else {
        cout << num2 << " is NOT a prime number." << endl;
    }

    return 0;
}