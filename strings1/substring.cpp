#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "abcdef";
    // cout<<s.substr(1,3); // 1 -> index ,3-> length
    string str;
    cout<<"enter a string: ";
    cin>>str;
    int n = str.length();
    cout<<str.substr(n/2);
}