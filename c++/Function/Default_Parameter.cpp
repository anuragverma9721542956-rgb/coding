#include<iostream>
using namespace std;
void power(int base,int exponent = 2){
    int ans =1;
    for(int i=0;i<exponent;i++){
        ans*=base;
        cout<<ans<<endl;
    }
// void fun(int age = 19){
//    cout<<"My age is " <<age<<endl;
}
int main(){
    power(5);
    power(5,3);

   
    

}