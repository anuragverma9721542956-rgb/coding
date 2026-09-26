#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v;// empty vector
    v.push_back(41);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(81);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(56);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;


}