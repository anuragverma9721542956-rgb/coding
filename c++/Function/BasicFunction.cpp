#include<iostream>
using namespace std;
void fun(){
    cout<<"Tanvi is a obidient girl"<<endl;
}
void anu(){
    cout<<"Hello anu"<<endl;
    fun();
}
void raju(){
    cout<<"Hello Raju"<<endl;
    anu();
}
void amit(){
    cout<<"Hello Amit"<<endl;
    raju();
}
int main(){
    amit();
    cout<<"Hi Harry"<<endl;
    

   

}

