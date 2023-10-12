#include<iostream>
using namespace std;
int main(){
    string str = "1234";
    int x = stoi(str);
    cout<<x+1<<endl;

    // stoll
    string s = "12344564323434";
    long long y = stoll(s);
    cout<<y;
}