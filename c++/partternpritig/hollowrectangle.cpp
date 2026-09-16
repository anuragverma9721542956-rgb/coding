#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col";
    cin>>m>>n;
    for (i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1|| i==m || j==1 ||j==n) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
    cout<<endl;
    }
    
}
