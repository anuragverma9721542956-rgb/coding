#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col :    ";
    cin>>n;
    // method 1

    // for (i=1;i<=n;i++){
    //     for(j=1;j<=2*i-1;j++){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;
    // }
    int star =1;
        for (i=1;i<=n;i++){
        for(j=1;j<=star;j++){
            cout<<" * "<<" ";
        }
        star+=2;
        cout<<endl;
} 
}