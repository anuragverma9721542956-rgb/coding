#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> v){//pass by value
//     v[2]= 99;
// }
void change(vector<int>& v){//pass by reference
    v[2]= 99;
}
int main(){
    vector <int> v = {1,7,7,9,3,4,5};
    change(v);
    cout<<v[2]<<endl;
   
}