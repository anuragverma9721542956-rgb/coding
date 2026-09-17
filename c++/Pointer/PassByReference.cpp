#include<iostream>
using namespace std;
void change(int* ptr,int* ptrs ){
    *ptr = 45;
    *ptrs = 67;
}
int main(){
    int x=5;
    int y = 7;
    change(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;

}