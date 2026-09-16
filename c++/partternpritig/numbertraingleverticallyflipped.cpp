#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col :    ";
    cin>>n;

    for (i=1;i<=n;i++){
        for(j=1;j<+n+1-i;j++){
            cout<<" "<<" ";
        }
        for (int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
} 