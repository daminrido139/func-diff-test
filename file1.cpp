#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "Adding " << a << " and " << b << endl;
    return a+b;
}

int sub(int a, int b) {
    cout << "Subtracting " << a << " and " << b << endl;
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}

int divide(int a, int b) {
    return a/b;
}