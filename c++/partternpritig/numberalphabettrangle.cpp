#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col";
    cin>>m>>n;
    for (i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            if(i%2!=0)  cout<<j<<" ";
            else cout<<(char)(j+64)<<" ";
            
            
            
                
            
        }
        cout<<endl;
    }
} 