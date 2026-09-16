#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter row number : ";
    cin>>n ;
    
    
    
    // for (i=1;i<=n;i++){
    //     for(j=1;j<=n-i;j++){
    //         cout<<"  "<<" ";
    //     }
            
    //     for(j=1;j<=2*i-1;j++){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;
    // }
    int nsp= n-1,nst=1;

    for (i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            cout<<"  "<<" ";
        }
            
        for(j=1;j<=nst;j++){
            cout<<"* "<<" ";
           } 
        nsp--;
        nst+=2;
        cout<<endl;
        }     
}