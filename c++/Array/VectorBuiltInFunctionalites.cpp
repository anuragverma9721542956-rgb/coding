#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v = {1,7,7,9,3,4,5};
    // 
    // reverse(v.begin(),v.end());
    // for(int ele : v) cout<<ele<<" ";
    // first element begaim same and change other element
       reverse(v.begin()+1,v.end());
    for(int ele : v) cout<<ele<<" ";
   
}