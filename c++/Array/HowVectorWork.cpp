#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v;// empty vector
    v.push_back(41);
    v.push_back(81);
    v.push_back(7);
    v.push_back(56);
    v.push_back(8);
    v.push_back(4);
    v.push_back(3);
    v.push_back(9);
    v.push_back(6);
    for(int i =0; i<=v.size();i++){
        cout<<v[i]<<" ";
    }

}