#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter row : ";
    cin >> n;

    // int nsp = n - 1, nst = 1;

    // for(int i = 1; i <= n; i++) {

    //     // spaces
    //     for(int j = 1; j <= nsp; j++) {
    //         cout << " ";
    //     }

    //     // stars
    //     for(int j = 1; j <= nst; j++) {
    //         cout << "*";
    //     }

    //     nsp--;
    //     nst += 2;

    //     cout << endl;
    // }

    //   nsp =  1, nst = 2*n-3;

    // for(int i = 1; i <= n; i++) {

    //     // spaces
    //     for(int j = 1; j <= nsp; j++) {
    //         cout << " ";
    //     }

    //     // stars
    //     for(int j = 1; j <= nst; j++) {
    //         cout << "*";
    //     }

    //     nsp++;
    //     nst -= 2;

    //     cout << endl;
    // }
     int nsp = n - 1, nst = 1;

    for(int i = 1; i <=2* n-1; i++) {

        // spaces
        for(int j = 1; j <= nsp; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= nst; j++) {
            cout << "*";
        }
        if(i<n){
            nsp--;
            nst+=2;
        }
        else{


        nsp++;
        nst -= 2;
        }

        cout << endl;
    }

    return 0;
}

    

