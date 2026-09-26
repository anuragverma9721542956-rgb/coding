#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> arr ={1,2,4,5,6,0};
   int n =arr.size();
   int sum =0;
   int argsum = (n*(n+1))/2;
   for(int i=0;i<n;i++){
    sum = sum+arr[i];
   }
    if(sum==argsum){
        cout<<"no number is misssing";

    }
    else{
        cout<<"the missing number is : "<<(argsum-sum);
    
   }
}