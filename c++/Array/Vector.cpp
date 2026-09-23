#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(8,-1);//index 0 to 4
    // int n=arr.size();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(9);// add a last element
    arr.push_back(89);
    arr.pop_back();//remove last element
    arr.push_back(10);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}


