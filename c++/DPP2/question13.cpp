#include <iostream>
using namespace std;

int main() {
    int n, S;

    cout << "Enter number of sides: ";
    cin >> n;

    cout << "Enter sum of interior angles: ";
    cin >> S;

    int calculatedSum = (n - 2) * 180;

    if (n >= 3 && S == calculatedSum) {
        cout << "Valid Polygon";
    }
    else {
        cout << "Invalid Polygon";
    }

    return 0;
}