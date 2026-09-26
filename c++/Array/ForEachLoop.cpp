#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4,5};
    // Multiply even number by 2,sqware the odd number
    // for(int i=0;i<v.size();i++){
    //     if(v[i]%2==0) v[i]*=2;
    //     else v[i] *= v[i];
    // 
    //    for(int ele :v) cout<<ele<<" ";

    
    for(int i = v.size();i>=0;i--){
        cout<<v[i]<<" ";
    }
    for(int i : v){
        cout<<i<<" ";//use for one direction
    }
}