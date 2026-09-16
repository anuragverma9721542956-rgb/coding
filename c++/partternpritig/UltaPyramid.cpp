#include<iostream>
using namespace std;
int main(){

int  i,j,n;
cout<<"Enter the number : ";
cin>>n;    
    
    
    int nsp=2*n- 1,nst=1;

    for (i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            cout<<"  "<<" ";
        }
            
        for(j=1;j<=nst;j++){
            cout<<"* "<<" ";
           } 
        nsp++;
        nst-=2;
        cout<<endl;
        }  
    
    
    }