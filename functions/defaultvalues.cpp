#include<iostream>
using namespace std;
void fun(int x = 8, bool y = true){
    cout<<x<<" "<<y;
}   // 7 or 8 yha pr default values hai
int main(){
    fun(false);
}