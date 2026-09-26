#include <iostream>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates of A: ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of B: ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of C: ";
    cin >> x3 >> y3;

    float left = (y2 - y1) * (x3 - x2);
    float right = (y3 - y2) * (x2 - x1);

    if (left == right) {
        cout << "The points are collinear";
    }
    else {
        cout << "The points are not collinear";
    }

    return 0;
}