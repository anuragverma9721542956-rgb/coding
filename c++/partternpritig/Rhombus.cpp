#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col :    ";
    cin>>n;
    // method 1

    for (i=1;i<=n;i++){
        for(j=1;j<+n+1-i;j++){
            cout<<" "<<" ";
        }
        for (int k=1;k<=n;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
} 