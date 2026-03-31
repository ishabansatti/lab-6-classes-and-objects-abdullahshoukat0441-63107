#include <iostream>
#include <string>
using namespace std;

void printType(int a) { cout << "Data type: Integer (" << a << ")" << endl; }
void printType(double a) { cout << "Data type: Double (" << a << ")" << endl; }
void printType(char a) { cout << "Data type: Character (" << a << ")" << endl; }
void printType(string a) { cout << "Data type: String (" << a << ")" << endl; }

int main() {
    printType(42);
    printType(3.1415);
    printType('Z');
    printType(string("C++ is fun"));
    return 0;
}