#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int sum = 0,n2=n;
   int lastdigit = 0;
   int reverse =0;
   while(n!=0){
    lastdigit = n%10;
    sum=sum*10+lastdigit;
    n=n/10;

   }
cout<<sum +n2;
}