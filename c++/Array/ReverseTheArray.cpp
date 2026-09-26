#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int arr[7] = {1,2,3,4,5,6,7};
    // int brr[7];
    // for(int i=0;i<=6;i++){
    //     brr[i] = arr[6-i];
    // }
    // for(int i =0;i<=6;i++){

    //     cout<<brr[i]<<endl;
    // }

    vector<int> arr = {10,20,30,40,50,60,70};
    print(arr);
    int i =0,j = 6;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;

    }
    print(arr);

  
}
