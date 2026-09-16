#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    int i;
    
    // for(i=1;i<=(2*n-1);i+=2){
    //     cout<<i<<endl;   
    // }
    // 1,3,5,7,9,11----------n
    // int a=1;
    // for(i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+2;
    // }
    // // 4,7,11,15,------------upto n
    //     int a=4;
    // for(i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+3;
    // }
    // reverse AP
    // 100,97,94,91,87,----------------upto n
    int a=100;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a-=3;
     }
    // for(int a=100;a>0;a=a-3){
    //     cout<<a<<endl;
    // }
    

}