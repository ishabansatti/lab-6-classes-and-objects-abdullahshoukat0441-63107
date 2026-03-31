#include <iostream>
using namespace std;

int generateID() {
    static int id = 1001;
    return id++;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Generated ID: " << generateID() << endl;
    }
    return 0;
}