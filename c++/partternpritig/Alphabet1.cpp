#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col";
    cin>>m>>n;
    for (i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i%2!=0) cout<<(char)(96+i)<<" ";
            
            
            else cout<<(char)(i+64)<<" ";
                
            
        }
        cout<<endl;
    }
}