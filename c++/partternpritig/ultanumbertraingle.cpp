 #include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter row &col";
    cin>>m>>n;
    // method 1
    // for (i=1;i<=m;i++){
    //     for(j=1;j<=n+1-i;j++){
    //          cout<< j <<" ";
            
            
            
                
            
    //     }
    //     cout<<endl;
    // }
    // method 2
        for (i=n;i>=1;i--){
        for(j=1;j<=i;j++){
             cout<< "*" <<" ";

        }
        cout<<endl;
    } 



}        