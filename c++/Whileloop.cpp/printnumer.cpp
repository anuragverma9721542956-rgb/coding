#include<iostream>
using namespace std;
int main(){
    // int i=1;
    // while(i<=10){
    //     cout<<i<<endl;
    //     i++;
    // }
    int n;
    cin>>n;

    int reverse =0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        
        reverse*=10;
        reverse +=lastdigit;
        n=n/10;



    }
    cout<<reverse;
}