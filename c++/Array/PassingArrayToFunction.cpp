#include<iostream>
using namespace std;
void change(int y[]){
    y[0]=20;
}
int main(){
    int x[] = {45,23,89,56,32,75,-4,8};

    change(x);
    cout<<x[0]<<endl;


}