#include<iostream>
using namespace std;
void starTraingle(int n){
        for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< " * ";
        }
        cout<<endl;
    }
    int b;

}
int main(){
    int a;
    cout<<"Enter row &col";
    cin>>a;
    starTraingle(a);
    int b;
    cout<<"Enter row &col";
    cin>>b;
    starTraingle(b);

    int c;
    cout<<"Enter row &col";
    cin>>c;
    starTraingle(c);
    

}