#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    // Check whether triangle is valid
    if (a + b > c && b + c > a && c + a > b) {

        // Check triangle type
        if (a == b && b == c) {
            cout << "Equilateral Triangle";
        }
        else if (a == b || b == c || c == a) {
            cout << "Isosceles Triangle";
        }
        else {
            cout << "Scalene Triangle";
        }
    }
    else {
        cout << "Invalid Triangle";
    }

    return 0;
}