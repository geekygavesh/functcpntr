#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str = "gavesh is a devop";
    // cout<<str.size();  // size or length dono use krskte
    // int len = str.length();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;
    
    // string s = "raghav";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;
    
    // string s = "abc";
    // cout<<s<<endl;
    // s = s + "xcd"; // append
    // cout<<s<<endl;
    // s = "ert"+ s;
    // cout<<s<<endl;

    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    cout<<s<<endl;
}